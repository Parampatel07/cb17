// Write a programe to findout how many days month has do not use else if and or
#include <stdio.h>
void main()
{
     int month;

     printf("Enter your month ");
     scanf("%d", &month);
     if (month <= 12)
     {
          if (month >= 1)
          {
               if (month == 2)
               {
                    printf("it has 28 - 29 days ");
               }
               else
               {
                    if (month <= 7)
                    {
                         if (month % 2 == 0)
                         {
                              printf("it has 30 days ");
                         }
                         else
                         {
                              printf("it has 31 days ");
                         }
                    }
                    else
                    {
                         if (month % 2 == 0)
                         {
                              printf("it has 31 days ");
                         }
                         else
                         {
                              printf("it has 30 days ");
                         }
                    }
               }
          }
          else
          {
               printf("Invaild month ");
          }
     }
     else
     {
          printf("invalid month ");
     }
}