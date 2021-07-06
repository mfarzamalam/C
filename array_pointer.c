#include <stdio.h>

void pointer_array(int *ptr, int n){
    for (int i=0; i<n; i++){
        printf("Index = %d, Address = %u, Value = %d\n", i, ptr+i, *(ptr+i));
    }
    ptr[4] = 15;
}

int main(){
    int marks[5];
    int *ptr, *ptr_1, *ptr_2, *ptr_3, *ptr_4;

    // ptr = marks;
        //Or
    ptr = &marks[0];
    ptr_1 = &marks[1];
    ptr_2 = &marks[2];
    ptr_3 = &marks[3];
    ptr_4 = &marks[4];

    printf("%u\n", ptr);
    printf("%u\n", ptr_1);
    printf("%u\n", ptr_2);
    printf("%u\n", ptr_3);
    printf("%u\n", ptr_4);


    // for(int i=0; i<5; i++){
    //     printf("Enter the value of %d: ", i);
    //     scanf("%d", ptr);
    //     ptr++;
    // }

    // for(int i=0; i<5; i++){
    //     printf("The value of %d is %d, and the address is %u\n",i, marks[i], ptr++);
    // }    

    int student[] = {4,5,6,7,70,8,9};
    pointer_array(student, 7);
    printf("Index[4] = %d\n", student[4]);

    return 0;
}