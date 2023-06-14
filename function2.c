// Write a programe to peform addition of 2 number 
#include<stdio.h>
void getAdd(int a,int b)
{
    int answer =  a + b;
    printf("The value of answer is %d ",answer);
}
void getSub(int a,int b)
{
     int answer = a - b;
     printf("\nThe value of answer is %d ",answer);
}
void main()
{
     int number1,number2;
     printf("Enter value of number 1 ");
     scanf("%d",&number1);
     printf("Enter value of number 2 ");
     scanf("%d",&number2);
     getAdd(number1,number2);
     getSub(number2,number1);
}