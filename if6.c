// 7) Write a programe to findout wether the given year is millieum year or not 
#include<stdio.h>
void main()
{
     int year , answer ;

     printf("Enter value of year ");
     scanf("%d",&year);

     answer = year % 1000 ;
     
     if(answer == 0)
     {
          printf("it is millineum year ");
     }
     else
     {
          printf("it is not a millineum year ");
     }
     printf("\nGoodbyee..");
}