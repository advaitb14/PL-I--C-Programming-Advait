#include <stdio.h>
int main()
{
    int a,b,temp;

    a=111;
    b=222;
    printf("\n Before swapping a=%d b=%d",a,b);
    
    temp=a;
    a=b;
    b=temp;

    printf("\n After swapping a=%d b=%d",a,b);
    return 0;
}