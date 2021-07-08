#include <stdio.h>
#include <string.h>


struct student
{
    int age;
    float marks;
    char name[100];
};


void Show(struct student st){
    printf("The age of student is: %d\n", st.age);
}


int main(){
    // first method to initialize structure
    struct student s1;
    s1.age = 25;
    s1.marks = 47.63;
    // s1.name = "Press F";     // error: assignment to expression with array type
    strcpy(s1.name, "Press F");

    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%.2f\n", s1.marks);


    struct student mystudent[100];

    mystudent[0].age = 21;
    mystudent[0].marks = 721;
    strcpy(mystudent[0].name, "Farzam");

    mystudent[1].age = 24;
    mystudent[1].marks = 566;
    strcpy(mystudent[1].name, "Ali");

    mystudent[2].age = 29;
    mystudent[2].marks = 591;
    strcpy(mystudent[2].name, "Javed");

    mystudent[3].age = 24;
    mystudent[3].marks = 577;
    strcpy(mystudent[3].name, "Larry");

    mystudent[4].age = 23;
    mystudent[4].marks = 888;
    strcpy(mystudent[4].name, "Haroon");

    for (int i=0; i<5; i++){
        printf("Age :%d, Marks :%.2f, Name :%s\n", mystudent[i].age, mystudent[i].marks, mystudent[i].name);
    }

    
    // Second method to initialize structure
    struct student new_entry = {22, 55, "Farzam"};  
                                // sequence is important
    printf("%s\n", new_entry.name);



    // Third method to initialize structure
    struct student new_entry2 = {1};  // Power to set all element value
    printf("%d\n", new_entry2.age);


    struct student st1;
    struct student *ptr;

    ptr = &st1;
    ptr->age = 9999;

    printf("%d\n", st1.age);
    Show(st1);


    return 0;
}