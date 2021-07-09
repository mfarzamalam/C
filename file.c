#include <stdio.h>

int main(){
    FILE *ptr;

    int num;
    int num2;

    ptr = fopen("test.txt", "r");
    
    if(ptr == NULL){
        printf("File doesnot exist\n");
    }else{
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
    
        printf("%d\n", num);
        printf("%d\n", num2);

        fclose(ptr);
    }



    int number = 99999;

    ptr = fopen("create.txt", "a");

    fprintf(ptr, "The number is %d\n", number);
    fclose(ptr);



    ptr = fopen("create.txt", "w");
    putc('c', ptr);
    putc('c', ptr);




    ptr = fopen("create.txt", "r");
    char c = fgetc(ptr);
 
    while (c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
 
    printf("\n");

    return 0;
}