#include <stdio.h>

int main(){
     
         // Find all the Prime numbers 
    for (int i=1; i<100; i++){
        if(i!=2 && i!=3 && i!=5 && i!=7){
            if (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0){
                printf("%d\n",i);
            }
        }else{
            printf("%d\n",i);
        }
    }

    return 0;
}