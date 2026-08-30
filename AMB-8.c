#include    <stdio.h>
int main()
{
    int a,b,temp;

    printf("\n enter 1st number :");
    scanf("%d",&a);

    printf("\n enter 2nd number :");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;

    printf("\n After swapping a=%d b=%d",a,b);
    return 0;
}