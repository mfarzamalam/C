#include <stdio.h>

void display();

int sum(int a, int b);

int main(){
    int a;
    printf("This is from main function\n");
    display();

    a = sum(4,7);
    printf("%d\n", a);

    return 0;
}


void display(){
    printf("This is from the display function\n");
}

int sum(int a, int b){
    int result = a + b;

    return result;
}