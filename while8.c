// Write a programe to print half pyramid
#include <stdio.h>
void main()
{
     int count = 0,flash=0,temp=2;
     printf("*");
     printf("\n");
     
     
     while(flash < 5)
     {
          while (count < temp)
          {
               printf("*");
               count = count + 1;
          }
          printf("\n");
          temp = temp +1 ;
          count = 0;
          flash = flash + 1;
     }
     // while (count < 3)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0 ;
     // while(count < 5)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}