#include <stdio.h>
int main()
{
  //declaring variables
  int byear,age;
  //input the birth year
  printf("Enter your birth year");
  scanf("%d",&byear);
  //process
  age=2023-byear;
  //output
  printf("Age is %d \n",age);
}
