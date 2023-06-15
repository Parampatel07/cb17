// Write a programe to peform multiplication of 2 variable 
#include<stdio.h>
int getMulti(int num1,int num2)
{
     int answer = num1 * num2;
     return answer;
}
void main()
{
     int num1,num2,temp;

     printf("Enter value of number 1 ");
     scanf("%d",&num1);
     printf("Enter value of number 2 ");
     scanf("%d",&num2);
     temp = getMulti(num1,num2);
     printf("the value of temp is %d ",temp);
     // getMulti(10,20);
}