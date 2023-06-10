// Write a programe to accept name from user and print it in reverse
// param
// marap
#include <stdio.h>
void main()
{
     char names[25];
     int count = 0;

     printf("Enter your name ");

     for (count = 0; count < 25; count++)
     {
          scanf("%c", &names[count]);
          if (names[count] == '\n')
          {
               break;
          }
     }
     printf("the value of count is %d ",count);
     printf("your name is ");
     for (count = count; count>=0; count--)
     {
          printf("%c", names[count]);
     }
     // scanf("%c",&names[1]);
     // scanf("%c",&names[2]);
}