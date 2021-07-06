#include <stdio.h>

int main(){
    int i = 4;
    int *ptr_int;
    ptr_int = &i;

    float f = 7.3;
    float *ptr_float;
    ptr_float = &i;

    char c = 'c';
    char *ptr_char;
    ptr_char = &c;


    printf("The address of integer i: %u\n", ptr_int);
    ptr_int++; // int is 4 bytes
    ptr_int++;
    ptr_int--;
    printf("The address of integer i: %u\n\n", ptr_int);


    printf("The address of float f: %u\n", ptr_float);
    ptr_float++; // float is 4 bytes
    ptr_float++;
    ptr_float--;
    printf("The address of float f: %u\n\n", ptr_float);


    printf("The address of character c: %u\n", ptr_char);
    ptr_char++; // character is 1 byte
    ptr_char++;
    ptr_char--;
    printf("The address of character c: %u\n", ptr_char);


    return 0;
}