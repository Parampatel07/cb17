// 9) Write a programe to findout zodiac sign of user
#include <stdio.h>
void main()
{
     int month, day;

     printf("Enter your birth month ");
     scanf("%d", &month);
     printf("Enter your birth day ");
     scanf("%d", &day);

     if (month <= 12 && month >= 1)
     {
          if ((month == 3 && day >= 21 && day <= 31) || (month == 4 && day <= 19 && day >= 1))
          {
               printf("your zodiac sign is aries ");
          }
     }
     else
     {
          printf("Invalid input ");
     }
}