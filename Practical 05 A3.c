#include<stdio.h>
int main()
{
   int n,total = 1;
   printf("Enter a number: ");
   scanf("%d", &n);
   if(n<0)
     {
      printf("Invalid input");
    }
    else
    {for  (int i = 1; i<=n ;i++)
          (total=i*total);
   }
   printf("Factorial of %d is %d",n,total);
}
