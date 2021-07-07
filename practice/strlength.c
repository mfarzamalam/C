#include <stdio.h>

int strlength(char *st){
    char *str = st;
    int i = 0;

    while(*str != '\0'){
        i++;
        str++;
    }

    return i;
}



void count(char *c){
    int len = strlength(c);
    int j = 0;
    int i = 0;

    char check;
    printf("Please enter a character to check occurence: ");
    scanf("%c", &check);

    while (i<len){
        if (c[i] == check){
            j++;
        }

        i++;
    }

    printf("Letter %c, Occurs %d times\n", check,j);
}


int main(){
    char c[] = "A quick brown fox jumps over the lazy dog";
    strlength(c);
    
    count(c);

    return 0;
}