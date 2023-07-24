#include<stdio.h>
int main()
{
 int number;
 int total=0;
 int remainder;
 printf("Enter number: ");
 scanf("%d",&number);

 while(number!=0)
 {
     remainder=number%10;
     total+=remainder;
     number=number/10;
 }
 printf("The output is %d",total);
}
