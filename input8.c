// Write a programe to peform split of 4 digit number 
#include<stdio.h>
void main()
{
     int number ;
     int first,second,third,fourth;
     printf("Enter value of number ");
     scanf("%d",&number);

     first = number / 1000 % 10;
     second  = number / 100 %10 ;
     third = number / 10 % 10 ;
     fourth = number % 10 ;
     printf("the value of first is %d ",first);
     printf("the value of second is %d ",second);
     printf("the value of third is %d and fourth is %d ",third,fourth);
}