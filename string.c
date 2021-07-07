#include <stdio.h>
#include <string.h>

int main(){
    char c[] = "Hello from string\n";
    printf("%s", c);


    char c2[100];
    printf("Enter your name: ");
    // scanf("%s", c2);
    printf("Your name is %s\n", c2);


    char c3[100];
    printf("Enter your name: ");
    // gets(c3);
    puts(c3);


    char *ch = "Farzam Alam";
    // char ch[] = "hello";
    ch = "usama";
    printf("%s\n", ch);

    int length = strlen(ch);
    printf("%d\n", length);


    char st1[100] = "This is a source string";
    char st2[100] = "This is a copy string";

    strcpy(st2, st1);
    printf("%s\n",st2);

    strcat(st1, st2);
    printf("%s\n",st1);

    char *cmp = "Hellooo";
    char *cmp2 = "Helloon";

    int value = strcmp(cmp, cmp2);
    printf("The value is %d\n", value);

    return 0;
}