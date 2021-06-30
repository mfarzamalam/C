#include <stdio.h>


        // Calculate the area of rectangle
// int main(){
//     int l, w, Area;
//     printf("Length of the rectangle: ");
//     scanf("%d", &l);

//     printf("width of the rectangle: ");
//     scanf("%d", &w);

//     Area = w * l;

//     printf("The area of rectangle is %d", Area);
//     printf("\n");
//     return 0;
// }



        // Calculate the area of circle
// int main(){
//     float r,Area;
//     printf("Radius of the circle: ");
//     scanf("%f", &r);

//     Area = 3.14 * (r*r);
//     printf("The Area of circle is %f", Area);

//     printf("\n");
//     return 0;
// }



        // Calculate the volume of cylinder
int main(){
    float radius,height,Volume;
    printf("Radius of cylinder: ");
    scanf("%f", &radius);

    printf("Height of cylinder: ");
    scanf("%f", &height);

    Volume = 3.14 * (radius*radius) * height;

    printf("The total volume of cylinder is %f", Volume);
    printf("\n");
    return 0;
}