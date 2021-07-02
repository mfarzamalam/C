#include <stdio.h>

int main()
{
    int a;
    // printf("Enter a number: ");
    // scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is Even\n", a);
    }
    else
    {
        printf("%d is Odd\n", a);
    }


    // if assignment operator used in if condition then it will always consider True
    // The only way condition doesnot work when value is Zero. otherwise it is always True
    if (a = -1)
    {
        printf("%d is  true\n", a);
    }


    int age, Vip;
 
    printf("Enter Your Age: ");
    // scanf("%d", &age);

    printf("Are you in emergency (press 1 for Yes): ");
    // scanf("%d", &Vip);

    if ((age >= 18 && age <= 22) || Vip == 1)
    {
        printf("You are allowed to Drive\n");
    }
    else if (age >= 23)
    {
        printf("You are not young You should hire a Driver\n");
    }
    else
    {
        printf("Take a bus you fat fuck\n");
    }


    // Taking 3 subject input
    float get_chem,get_phy,get_maths, final_chem, final_phy, final_maths; 
    int total_marks;

    printf("Enter Your chemistry marks: ");
    scanf("%f", &get_chem);

    printf("Enter Your physics marks: ");
    scanf("%f", &get_phy);

    printf("Enter Your maths marks: ");
    scanf("%f", &get_maths);

    final_chem = (get_chem/100) * 100;
    final_phy = (get_phy/100) * 100;
    final_maths = (get_maths/100) * 100;

    total_marks = ((final_chem + final_phy + final_maths)/300) * 100;

    if(final_chem >= 33 && final_maths >= 33 && final_phy >= 33){
        printf("Your are Pass, Total Score is:%d\n", (int)total_marks);
    }else{
        printf("Your are Failed, Total Score is:%d\n", (int)total_marks);
        printf("Your result:\n");
        printf("%d out of 100 in Physics\n", (int)final_phy);
        printf("%d out of 100 in Maths\n", (int)final_maths);
        printf("%d out of 100 in Chemistry\n", (int)final_chem);
    }

    return 0;
}