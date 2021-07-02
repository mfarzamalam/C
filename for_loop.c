#include <stdio.h>

int main(){
    for (int i=1; i <= 5; i++)
    {
        // printf("%d\n", i);
        // break;
    }


        // Find the Even number    
    for(int j=1; j<=100; j++){
        if(j%2==0){
            // printf("Even number:%d\n",j);
        }
    }


        // Print the mathematical table in forward and reverse order
    int table = 9;
    for(int i=1; i<=10; i++){
        // printf("%d * %d = %d\n", table,i,table*i);
    }

    // printf("\n");

    for(int i=10; i>=1; i--){
        // printf("%d * %d = %d\n", table,i,table*i);
    }


        // Find the Factorial
    int factorial = 7; int result=1;
    for(int i=factorial; i>0; i--){
        result *= i;
    }
        // printf("The factorial of %d is %d\n", factorial, result);

    return 0;
}