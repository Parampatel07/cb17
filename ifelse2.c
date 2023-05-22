// Write a programe to findout which variable is smaller outof given 2 variable 
#include<stdio.h>
void main()
{
     int num1 , num2 ;

     printf("Enter value of num1 ");
     scanf("%d",&num1);
     printf("Enter value of num2 ");
     scanf("%d",&num2);

     if(num1 <= num2)
     {
          printf("num1 is smaller than num2 ");
     }
     else
     {
          printf("num2 is smaller than num1 ");
     }
}