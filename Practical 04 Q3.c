#include<stdio.h>
int main()
{
  float pi=3.14,area,circumfarence,radius;

  printf("Enter the radius of the circle:");
  scanf("%f",&radius);

  area=pi*radius*radius;
  printf("Area of circle is:%f \n",area);

  circumfarence=2*pi*radius;
  printf("circumfarence of circle is:%f",circumfarence);

  }
