#include<stdio.h>
int main()
{
  double tempinF;

  printf("Enter the temperature in Farenheit");
  scanf("%.1f",&tempinF);

  double tempinC=(5.0/9.0)*(tempinF-32);

  printf("Temperature in Celcius:%.3f",tempinC);

  return 0;
}
