// Write a programe to print half numberd pyramid
// https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0, flash = 0;
     for (flash = 1; flash <= 6; flash++)
     {
          for (count = 0; count < flash; count++)
          {
               printf("%d ",flash);
          }
          printf("\n");
     }

     // for (count = 0; count < 3; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for (count = 0; count < 4; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for(count=0;count<5;count++)
     // {
     //      printf("*");
     // }
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}