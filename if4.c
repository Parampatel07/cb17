// Write a programe to findout wether the user given year is millineum year or not 
//1000,2000,3000,4000....
#include<stdio.h>
void main()
{
     int year;
     int answer ;
     printf("Enter value of year ");
     scanf("%d",&year);

     answer = year % 1000 ; // 2000 % 1000 = 0

     //check
     if(answer == 0)
     {
          printf("it is millieum year ");
     }
     printf("\nGoodbyee...");
}