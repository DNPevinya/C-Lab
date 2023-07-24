#include <stdio.h>
int main()
{
 int serviceyears;
 float basicsalary,grosssalary,sales;
 char city;

 printf("enter the basicsalary");
 scanf("%f",&basicsalary);
 printf("enter the years of service");
 scanf("%d",&serviceyears);
 printf("if you are working city is colombo enter 'C' and if it is not enter any other letter ");
 scanf("%s",&city);
 printf("enter the monthly sales");
 scanf("%f",&sales);

  if(serviceyears>5)
    grosssalary=basicsalary+basicsalary*0.1;
  else
    grosssalary=basicsalary;

  syntax:
      switch(city)
      {
      case'C':
          grosssalary=basicsalary+2500;break;
          default:printf("any other letter \n\n");
          grosssalary=grosssalary;
      }

      if(sales<25000)
      grosssalary=grosssalary+sales*0.1;
      else if(25000<sales && sales<50000)
        grosssalary=grosssalary+sales*0.12;
      else
        grosssalary=grosssalary+sales*0.15;

      printf("grosssalary %.2f \n",grosssalary);

}
