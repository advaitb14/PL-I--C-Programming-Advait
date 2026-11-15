#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter a roll no. :");
    scanf("%d",&rollnum);

    printf("\n Enter a percentage :");
    scanf("%f",&per);

    printf("\n Enter a grade :");
    scanf(" %c",&grade);

printf("\n -----Student Information-----");
printf("\n Roll Number:%d",rollnum);
printf("\n Percentage:%f",per);
printf("\n Grade     :%c",grade);

return 0;
}
