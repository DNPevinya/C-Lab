#include<stdio.h>
int main()
{
  int num;
  float fraction;
  double decimal;
  char character;

   printf("Enter an integer: ");
   scanf("%d", &num);
   printf("Enter a fraction: ");
   scanf("%f", &fraction);
   printf("Enter a double: ");
   scanf("%.1f", &decimal);
   printf("Enter a character: ");
   scanf("%c", &character);

   printf("\nInteger: %d\nFloat: %f\nDouble:  %f\nCharacter: %c\n",num, fraction,decimal,character);
   return 0;
}
