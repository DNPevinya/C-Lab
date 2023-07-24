#include<stdio.h>
int main()
{

       int no;
       printf("Enter the number");
       scanf("%d",&no);

       switch(no%2)
      {
       case 0: printf("Even number");break;
       case 1: printf("Odd number");break;
       default: printf("Invalid input");
       }

}

