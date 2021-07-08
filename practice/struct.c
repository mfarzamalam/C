#include <stdio.h>


struct school
{
    int teacher;
    int student;
};

struct school SumOfAll(struct school a, struct school b)
{
    struct school result;
    result.student = a.student + b.student;
    result.teacher = a.teacher + b.teacher;

    return result;
};


typedef struct Dating{
    int arrival;
    int exit;
} Date;

void compare_date(Date d){
    int compare = d.exit - d.arrival;

    printf("Person stayed %d days in the hotel\n", compare);
}


int main(){
    struct school s1, s2, r;

    s1.student = 4;
    s1.teacher = 8;
    s2.student = 7;
    s2.teacher = 11;
    r = SumOfAll(s1, s2);
    printf("The sum of student is :%d, And the sum of teacher is :%d\n", r.student, r.teacher);


    Date d1, d2;
    d1.arrival = 4;
    d1.exit    = 17;
    compare_date(d1);

    return 0;
}