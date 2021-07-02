#include <stdio.h>

int main(){
    int i = 0;
    while (i<10)
    {
        printf("The loop value is %d\n", i+10+1);
        i++;
        // printf("%d\n",i);
    }
    

    int l, even=5;
    while(l<10){
        l++;
        if(l!=even){
            continue;
        }else{
            printf("%d\n", l);
        }
    }

    return 0;
}