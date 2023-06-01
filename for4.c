// Write a programe to print hollow inverted half pyramid
#include <stdio.h>
void main()
{
     int count = 0, space = 0,size=0;
     printf("Enter value of size of triangle ");
     scanf("%d",&size);
     for (count = 0; count < size; count++)
     {
          printf("*");
     }
     printf("\n");
     for(count=size-3;count>0;count--)
     {
          printf("*");
          for (space = 0; space < count; space++)
          {
               printf(" ");
          }
          printf("*");
          printf("\n");
     }
     // printf("*");
     // for(space = 0;space <2 ; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf("\n");
     printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}