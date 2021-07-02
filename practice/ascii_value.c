#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 97 && c <= 122){
        printf("Character is Lowercase\n");
    } else if (c >= 65 && c <= 90) {
        printf("Character is Uppercase\n");
    } else {
        printf("Invalid Character\n");
    }
    return 0;
}