#include <stdio.h>


void encryption(char *c){
    int len = strlength(c);
    int i=0;
    for(i=0; i<=len; i++){
        if (c[i] == 'a')
        {
            c[i] = '~';
        }
        else if (c[i] == 'b')
        {
            c[i] = '@';
        }
        else if (c[i] == 'c')
        {
            c[i] = '#';
        }
        else if (c[i] == 'd')
        {
            c[i] = '$';
        }
        else if (c[i] == 'e')
        {
            c[i] = '%';
        }
    }
    c[i] = '\0';

    printf("Your string is encrypted");
}

void decryption(char *c){
    int len = strlength(c);
    int i=0;
    for(i=0; i<=len; i++){
        if (c[i] == '~')
        {
            c[i] = 'a';
        }
        else if (c[i] == '@')
        {
            c[i] = 'b';
        }
        else if (c[i] == '#')
        {
            c[i] = 'c';
        }
        else if (c[i] == '$')
        {
            c[i] = 'd';
        }
        else if (c[i] == '%')
        {
            c[i] = 'e';
        }
    }
    c[i] = '\0';

    printf("Your string is de-crypted");
}


void encryption_2(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}


void decryption_2(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}


int main(){
    char c[] = "A quick brown fox jumps over the lazy dog";

    encryption(c);
    printf(": %s\n", c);
    decryption(c);
    printf(": %s\n", c);
    
    encryption_2(c);
    printf("Encrypted string is %s\n", c);

    decryption_2(c);
    printf("Decrypted string is %s\n", c);


    return 0;
}