// Write a programe to determine if you are overweight if above 100
#include<stdio.h>
void main()
{
     float weight ;

     printf("Enter value of weight ");
     scanf("%f",&weight);

     //check 
     if (100 <= weight)
     {
          printf("you are overweight ");
     }
     printf("\nGoodbyee...");
}