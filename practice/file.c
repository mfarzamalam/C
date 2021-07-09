#include <stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr2;
    
    // int num1;
    // int num2;
    // int num3;

    // ptr = fopen("read.txt", "r");
    
    // fscanf(ptr,"%d %d %d", &num1, &num2, &num3);
    // printf("Num1: %d, Num2:%d, Num3:%d\n", num1,num2,num3);




    // int table = 4;
    // ptr = fopen("table.txt", "w");
    
    // for(int i=0; i<10; i++){
    //     fprintf(ptr, "%d x %d = %d\n", table, i+1, table*(i+1));
    // }
    
    // fclose(ptr);




    // ptr = fopen("read.txt", "r");
    // ptr2 = fopen("content_copy.txt", "w");

    // char c = fgetc(ptr);
 
    // while(c!=EOF){
        // printf("%c", c);
        // fprintf(ptr2, "%c", c);
        // fputc(c, ptr2);

    //     c = fgetc(ptr);
    // }




    // char name[100];
    // int salary;
    // ptr = fopen("customer_detail", "a");
    
    // printf("Please tell us your name: ");
    // scanf("%s", name);
    // printf("Please tell us your salary: ");
    // scanf("%d", &salary);

    // fprintf(ptr, "Name: %s, Salary: %drs\n\n", name, salary);




    int num;
    int num2;
 
    ptr = fopen("read.txt", "r");
    ptr2 = fopen("read.txt", "a");
 
    fscanf(ptr, "%d", &num);
    num2 = num * 2;
    fprintf(ptr2, "\n%d", num2);


    return 0;
}