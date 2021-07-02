#include <stdio.h>

int main(){
    int rating;
    printf("Enter the ratings: ");
    scanf("%d", &rating);
    switch(rating){
        case 1:
            printf("You rate 1 out of 5\n");
            break;
        case 2:
            printf("You rate 2 out of 5\n");
            break;
        case 3:
            printf("You rate 3 out of 5\n");
            break;
        case 4:
            printf("You rate 4 out of 5\n");
            break;
        case 5:
            printf("You rate 5 out of 5\n");
            break;

        default:
            printf("Invalid rating!\n");
            break;
    }

    return 0;
}