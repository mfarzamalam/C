#include <stdio.h>

int main(){
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;

    printf("The value of 3*x - 8*y is %d\n", 3*x - 8*y);
    printf("The value of 8*y / 3*x is %d\n", 8*y / 3*x);
    // When two operators have same prority then we follow the 
    // rule of associativity. The rule says when priority is same
    // the calculation start from left to right.
    // The answer of 8*y / 3*x should be 4 when follow bodmas
    // but multiply and divide have same priority so we
    // go from left to right i.e associativity

    // Priority  Operator 
    // 1st          !
    // 2nd          *, /, %
    // 3rd          +, - 
    // 4th          <, >, <=, >=  
    // 5th          ==, !=
    // 6th          &&
    // 7th          ||
    // 8th          = 

    printf("%d\n",291%97);

    printf("%d\n", 3*x/y-z+k );
                // 3*2/3-3+1 
                // 6/3-3+1
                // 2-3+1
                // -1+1
                // 0

    return 0;
}