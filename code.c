#include <stdio.h>
int main()
{
    double num1, num2;
    char op;
    printf("Input 1st number :");
    scanf("%lf", &num1);
    printf("Input 2nd number :");
    scanf("%lf", &num2);
    printf("Input An Operator(+,-,*,/) :");
    scanf(" %c", &op);
    switch(op)
    {
     case '+':
        printf("%lf %c %lf = %lf",num1,op,num2,num1+num2);
        break;

     case '-':
        printf("%lf %c %lf = %lf", num1, op, num2, num1-num2);
        break;

     case '*':
        printf("%lf %c %lf = %lf", num1, op, num2, num1*num2);
        break;

     case '/':
        if(num2 == 0)
        {
            printf("Error:Division by zero");
        }
        else
        {
            printf("%lf %c %lf = %lf", num1, op, num2, num1/num2);
        }
        break;

     default:
     printf("Error:Invalid operator");
    }

    return 0;
}
