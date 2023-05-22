// Write a programe to findout wether the user given number is even or odd 
#include<stdio.h>
void main()
{
     int number ;

     printf("Enter value of number ");
     scanf("%d",&number);

     // < , > , <= , >= , == , !=
     if(number % 2 == 0)
     {
          printf("it is even number ");
     }
     else
     {
          printf("it is odd number ");
     }
     printf("\nGoodbyee...");
}