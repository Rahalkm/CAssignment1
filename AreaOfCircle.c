//Area of circle
#include<stdio.h>
int main()
{
    float area,radius,p=3.14f;

    printf(" Enter the radius : ");
    scanf("%f",&radius);
    area=p*radius*radius;

    printf("area of circle is %.4f having the radius %.4f",area,radius);

    return (0);
}
