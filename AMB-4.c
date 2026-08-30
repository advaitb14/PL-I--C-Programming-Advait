#include <stdio.h>
int main()
{
    float radius,area;
    
    printf("\n Enter radius of circle: ");
    scanf("%f",&radius);

    area=3.14*radius*radius;
    printf("\n area of the circle =%f",area);

    return 0;
}