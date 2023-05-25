// Write a programe to findout largest out of give three values
#include <stdio.h>
void main()
{
     int num1, num2, num3;

     printf("Enter value of num1 ");
     scanf("%d", &num1);
     printf("Enter value of num2 ");
     scanf("%d", &num2);
     printf("Enter value of num3 ");
     scanf("%d", &num3);

     if (num1 == num2 && num2 == num3)
     {
          printf("All are same ");
     }
     else
     {
          if (num1 > num2)
          {
               if (num1 > num3)
               {
                    printf("num1 is largest ");
               }
               else
               {
                    printf("num3 is largest ");
               }
          }
          else
          {
               if (num2 > num3)
               {
                    printf("num2 is largest ");
               }
               else
               {
                    printf("num3 is largest ");
               }
          }
     }

     printf("\nGoodbyee...");
}