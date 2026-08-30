#include <stdio.h>
int main()
{
    int num1,num2,num3,total;
    float average;

    printf("\n Enter 1st number :");
    scanf("%d",&num1);

    printf("\n Enter 2nd number :");
    scanf("%d",&num2);

    printf("\n Enter 3rd number :");
    scanf("%d",&num3);

    total=num1+num2+num3;
    average=total/3;
    printf("\n Average=%f",average);

        return 0;
}