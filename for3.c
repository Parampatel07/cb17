// Write a programe to create a inverted half pyramid
#include <stdio.h>
void main()
{
     int count = 0,flash=5,size;
     printf("Enter value of size ");
     scanf("%d",&size);
     for(flash=size;flash>0;flash--)
     {
          for (count = 0; count < flash; count++)
          {
               printf("*");
          }
          printf("\n");
     }

     // for (count = 0; count < 5; count++)
     // {
     //      printf("*");
     // }

     // printf("\n");
     // for(count=0;count<4;count++)
     // {
     //      printf("*");
     // }
}