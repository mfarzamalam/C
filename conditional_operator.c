#include <stdio.h>

int main(){
    int a ;
    printf("Enter the value: ");
    scanf("%d", &a);

    (a<5)? printf("Less than 5\n") : printf("Greater than 5\n");

    return 0;
}