#include <stdio.h>
#include <math.h>

int main(){
    int a = 2;
    int b = 6;
    float c = 3.2;

    printf("Addition %d\n", a+b);
    printf("Subtraction %d\n", a-b);
    printf("Multiplication %d\n", a*b);
    printf("Division %d\n", a/b);
    printf("Modulus %d\n", a%b);
    printf("To the power of %f\n", pow(2,6));
    
    printf("Addition of two different data types %f\n", a+c);
    printf("Multiplication of two different data types %f\n", a*c);
    printf("Division of two different data types %f\n", c/a);

    return 0;
}