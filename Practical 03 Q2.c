#include<stdio.h>
int main()
{
  int no1,no2,no3,max;
  printf("Enter three numbers");
  scanf("%d %d  %d",&no1,&no2,&no3);

  max=no1;
  if(no2>max)
  max=no2;

  if(no3>max)
  max=no3;

  printf("The highest is %d \n",max);
}

