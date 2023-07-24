#include<stdio.h>
int main()
{
    double no1,no2;
    char sign;
    printf("Enter two integers:");
    scanf("%lf %lf",&no1,&no2);
    printf("Enter a sign(+,-,*,/):");
    scanf(" %c",&sign);

    switch(sign)
    {
        case '+':printf("Addition is %.2f\n",no1 + no2);break;
        case '-':printf("Subtraction is %.2f\n", no1 - no2);break;
        case '*':printf("Multiplication is %.2f\n",no1 * no2);break;
        case '/':printf("Division is %.2f\n",no1 / no2);break;
        default:printf("invalid input\n");
     }
}
