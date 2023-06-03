// Write a programe to print full pyramid
// https://i1.faceprep.in/fp/articles/img/46684 1580817324.png
#include <stdio.h>
void main()
{
     int count = 0, flash,temp=0,adder=2,miner=4,size=0;
     printf("Enter size of triangle  ");
     scanf("%d",&size);
     miner=size-1;
     
     for (count = 0; count < size; count++)
     {
          printf(" ");
     }
     printf("*");
     printf("\n");
     for(temp=0;temp<size-1;temp++)
     {
          for (count = 0; count < miner; count++)
          {
               printf(" ");
          } // printf(" ");
          // printf(" ");
          for (flash = 0; flash < adder; flash++)
          {
               printf("*");
               printf(" ");
          }
          printf("\n");
          miner--;
          adder++;
     }
     // for (count = 0; count < 4; count++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf("\n");

     // for (count = 0; count < 2; count++)
     // {
     //      printf(" ");
     // }
     // // printf(" ");
     // for (flash = 0; flash < 4; flash++)
     // {
     //      printf("*");
     //      printf(" ");
     // }
     // printf("\n");
     // printf(" ");
     // for(flash=0;flash<5;flash++)
     // {
     //      printf("*");
     //      printf(" ");
     // }
     // printf(" ");
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf(" ");
}