#include <stdio.h>
int main()
{
    int choice;
    float num1,num2,result;

    do
    {
        printf("\n ========== Menu Driven Calculator ===========\n");
        printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit\n Enter your choice :");
        scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f",&num1,&num2);
            result=num1+num2;
            printf("Result: %.2f\n",result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f",&num1,&num2);
            result=num1-num2;
            printf("Result: %.2f\n",result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f",&num1,&num2);
            result=num1*num2;
            printf("Result: %.2f\n",result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f",&num1,&num2);
            if(num2!=0)
            {
                result=num1/num2;
                printf("Result: %.2f\n",result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
} 
while(choice!=5);
return 0;
}