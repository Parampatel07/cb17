// Write a programe to peform split 
// number = 56
// first = 5 
// second =6 
#include<stdio.h>
void main()
{
     int number,first,second;
     printf("Enter value of number ");
     scanf("%d",&number);
     // 76
     first = number / 10 ;
     second = number % 10 ;

     printf("the value of first is %d and value of second is %d ",first,second);
}