#include<stdio.h>
int main()
{
   char empname[20];
   float basicsalary,newsalary,increment;
   //input employee name,basic salary
   printf("Enter empname \n");
   scanf("%s",&empname);
   printf("Enter basicsalary \n");
   scanf("%f",&basicsalary);
   //process (if)
   if(basicsalary>=10000)
   increment=basicsalary*0.15;
   else if (basicsalary>=5000)
    increment=basicsalary*0.10;
    else
        increment=basicsalary*0.05;
    //output employee name with new salary
     newsalary=basicsalary+increment;
     printf("Employee name %s  \n",empname);
     printf("New salary %.2f  \n",newsalary);
}
