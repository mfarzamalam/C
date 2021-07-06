#include <stdio.h>

int positive_int(int arr[]);
int reverse(int *arr, int n);

int main(){
    int result[10];
    int *ptr = result;
    ptr = ptr + 2;

    if(ptr == &result[2]){
        printf("These point to the same location\n");
        printf("ptr: %u\n", ptr);
        printf("result[2]: %u\n", &result[2]);
    }else{
        printf("Nope\n");
        printf("ptr: %u\n", ptr);
        printf("result[2]: %u\n", &result[2]);
    }


    int table[10];
    int num = 5;
    printf("Enter the table: ");
    // scanf("%d", &num);
    
    for (int i=0; i<10; i++){
        table[i] = (i+1)*num;
        printf("%d x %d = %d\n", num,i+1,table[i]);
    }


    int arry[9] = {1,2,3,4,5,6,77,8,9};
    for(int i=0; i<7; i++){
        printf("%d,", arry[i]);
    }
    printf("\n");

    reverse(arry, 7);

    for(int i=0; i<7; i++){
        printf("%d,", arry[i]);
    }


    printf("\n");
    
    int arr[7] = {4,3,-6,-88,97,-15,-9};
    positive_int(arr);

    return 0;
}


int reverse(int *arr, int n){
    int temp;
    for (int i=0; i<(n/2); i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}


int positive_int(int arr[]){
    int count = 0;
    int temp;

    for(int i=0; i<7; i++){
        temp = arr[i];

        if(temp>=0){
            count++;
        }
    }

    printf("Positive integer are %d\n",count);
}