#include<stdio.h>
int main()
{
  float averageSpeed;
  int distance,time;

  printf("Enter the distance travelled in metres");
  scanf("%d",&distance);

  printf("Enter the time taken in seconds");
  scanf("%d",&time);

  averageSpeed=distance/time;

  printf("The average speed is %.3f m/s \n",averageSpeed);
}
