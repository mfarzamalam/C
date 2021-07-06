#include <stdio.h>

void print_2d_array(int school[][3]);

int main(){
    int marks[5];
    marks[0] = 89;
    marks[1] = 79;
    marks[2] = 69;

    printf("The marks we have is: %d\n", marks[0]);
    printf("The marks we have is: %d\n", marks[1]);
    printf("The marks we have is: %d\n", marks[2]);
    

    int id[] = {1,12,33,54,5,6};

    for (int i=0; i<6; i++){
        printf("The value of id[%d] is: %d\n", i, id[i]);
    }


    int school[3][3];
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("Enter the value of school[%d][%d]: ", i,j);
            scanf("%d", &school[i][j]);
        }
    }

    print_2d_array(school);
    
    return 0;
}


void print_2d_array(int school[][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("Value of school[%d][%d] is %d\n", i,j, school[i][j]);
        }
        printf("\n");
    }
}