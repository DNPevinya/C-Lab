#include <stdio.h>
int main()
{
  float no1,no2,avg;
  //input first number
  printf("Enter First Number");
  scanf("%f",&no1);
  //input second number
  printf("Enter Second Number");
  scanf("%f",&no2);
  avg=(no1+no2)/2;
  printf("The Average is %.2f",avg);
}
