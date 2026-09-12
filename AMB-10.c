 #include <stdio.h>
 int main()
 {
    int a=10,b=5,c=2;
    int result1,result2,result3,result4;
    result1=a+b*c;
    printf("\n result1=%d",result1);

    result2=(a+b*c)/2;
    printf("\n result2=%d",result2);

    result3=a+b*c/2;
    printf("\n result3=%d",result3);

    result4=a+b/c*2;
    printf("\n result4=%d",result4);

    return 0;
 }