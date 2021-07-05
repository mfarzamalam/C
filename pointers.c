#include <stdio.h>

int swap(int *a, int *b);

int main(){
    int i = 34;
    int j = *&i;
            // star(*) meaning: value of a giving address
            // ampersand(&) meaning: address of giving variable

    int k = &j;

    printf("value of i: %d\n", i);
    printf("value of j: %d\n", j);
    printf("Address of i is: %x\n", &i);
    printf("Address of j is: %x\n", &j);
    printf("Value of k is: %x\n", k);

    int x = 3;
    int y = 5;

    printf("Value of x=%d and y=%d before swap\n",x,y);
    swap(&x, &y);
    printf("Value of x=%d and y=%d after swap\n",x,y);


    return 0;
}

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}