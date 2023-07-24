#include<stdio.h>
int main()
{
 int no,counter=1,sum=0;
 float avg;
 while(counter<=10)
 {
 printf("Enter %d number",counter);
 scanf("%d",&no);
 sum=sum+no;
 counter++;
 }
 avg=(float)sum/10;
 printf("The average is %.2f \n",avg);

  if(avg>=50)

    {
    printf("Student has passed");
    }
    else
    {
    printf("Student has failed");
    }
}



