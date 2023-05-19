// Write a programe to peform swap without using 3rd variable 
#include<stdio.h>
void main()
{
     int num1,num2;

     printf("Enter value of num1 ");
     scanf("%d",&num1);
     printf("Enter value of num2 ");
     scanf("%d",&num2);

     printf("the value of num1 is %d and value of num2 is %d ",num1,num2);
     // + , - , * , /
     num1 = num1 + num2 ;
     num2 = num1 - num2 ;
     num1 = num1 - num2 ;
     printf("\nthe value of num1 is %d and value of num2 is %d ",num1,num2);
}