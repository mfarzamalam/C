#include <stdio.h>


int sum(int a);
int change_ten_times(int *a);
int Unchange_ten_times(int a);
void SumAndAverage(int a, int b, int *sum, float *avg);


int main(){
    int i = 77;
    int *pkr;
    pkr = &i;

    printf("Address of i: %x\n", pkr);
    printf("Value of i: %d\n", *pkr);


    printf("Address of i before passing to a function: %x\n", &i);
    sum(i);
    printf("Address of i after passing to a function: %x\n", &i);


    // Passed by reference and see if the value is changed or not
    printf("Value of i before multiply with 10: %d\n", i);
    change_ten_times(&i);
    printf("Value of i After multiply with 10: %d\n", i);


    // Passed by value and see if the value is changed or not
    printf("Value of i before multiply with 10: %d\n", i);
    Unchange_ten_times(i);
    printf("Value of i After multiply with 10: %d\n", i);


    // Return value by void using pointers
    int x=3, y=6, sum;
    float avg;

    SumAndAverage(x,y, &sum, &avg);
    printf("The Sum of x=%d and y=%d is %d\n",x,y, sum);
    printf("The Average of x=%d and y=%d is %f\n",x,y, avg);


    // Pointer to pointer
    int g = 15;
    int *ptr;
    int **ptr_ptr;
    
    ptr = &g;
    ptr_ptr = &ptr;

    printf("%d\n", **ptr_ptr);
    
    return 0;
}


int sum(int a){
    return a;
}


int change_ten_times(int *a){
    int num = *a * 10;
    *a = num;
}


int Unchange_ten_times(int a){
    int num = a * 10;
    a = num;
}


void SumAndAverage(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}