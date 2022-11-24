// Program 2.8 calculations on a table
#include <stdio.h>
#define pi 3.1415f

int main(void)
{
    float radius = 0.0f;
    float diametr = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;

    printf("Input the diametr of a table: ");
    scanf("%f", &diametr);

    radius = diametr / 2;
    circumference = diametr * pi;
    area = pi * radius * radius;

    printf("The circumference is %.2f. \n", circumference);
    printf("The area is %.2f.", area);
    return 0;
}