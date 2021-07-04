#include <stdio.h>

int fibonacci(int s,int add, int e);

int main(){
    
    int s = 1;
    int i = 1;
    int e = 16;
    printf("\nThe fibonacci of %d is %d\n",e, fibonacci(s,i,e));

    // unnatural behaviour

    // printf("%d %d %d\n", s,++s,s++);
    // printf("%d\n", s++);    

    return 0;
}


int fibonacci(int s, int add, int e){
    //1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 (Fibonacci series)
    //1, 2, 3, 4, 5, 6,  7,  8,  9, 10. 11.  12.  13.  14.  15.  16 (Numbers)

    printf("%d,", add);
    if (e==1){
        return add;
    }else{
        fibonacci(s+add,s,e-1);
    }
}