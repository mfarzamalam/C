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
    scanf("%d", &age);

    printf("Are you in emergency (press 1 for Yes): ");
    scanf("%d", &Vip);

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



    return 0;
}