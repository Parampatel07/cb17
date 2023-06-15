// Write a programe to create a clac 
#include<stdio.h>

float getAdd(int a,int b)
{
     return a + b ;
}
float getSub(int a,int b)
{
     return a - b;
}
float getMulti(int a,int b)
{
     return a * b;
}
float getDiv(int a,int b)
{
     return a / b;
}
float getModulus(int a,int b)
{
     return a % b;
}
void getMax(int a,int b)
{
     if(a > b)
     {
          printf("the value of number 1 is greater than number 2");
     }
     else if(b > a)
     {
          printf("the value of number 2 is greater than number 1");
     }
}
void getMin(int a,int b)
{
     if(a<b)
     {
          printf("the value of number 1 is smaller than number 2 ");
     }
     else if(b<a)
     {
          printf("the value of number 2 is smaller than number 1 ");
     }
}
void getEqaulity(int a,int b)
{
     if(a==b)
     {
          printf("Both are same ");
     }
     else
     {
          printf("Both are not same ");
     }
}
void main()
{
     int number1,number2,option;
     float answer;
     printf("Enter value of number 1 ");
     scanf("%d",&number1);
     printf("Enter value of number 2 ");
     scanf("%d",&number2);
     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for mutliplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for modulus ");
     printf("\nEnter 6 for max");
     printf("\nEnter 7 for min ");
     printf("\nEnter 8 for equality ");
     scanf("%d",&option);

     if(option==1)
     {
          answer =getAdd(number1,number2);
          printf("the value of answer is %f ",answer);
     }
     else if(option==2)
     {
          answer = getSub(number1,number2);
          printf("the value of answer is %f ",answer);
     }
     else if(option==3)
     {
          answer = getMulti(number1,number2);
          printf("the value of answer is %f ",answer);
     }
     else if(option==4)
     {
          answer= getDiv(number1,number2);
          printf("the value of answer is %f ",answer);
     }
     else if(option==5)
     {
          answer = getModulus(number1,number2);
          printf("the value of answer is %f ",answer);
     }
     else if(option==6)
     {
          getMax(number1,number2);
     }
     else if(option==7)
     {
          getMin(number1,number2);
     }
     else if(option==8)
     {
          getEqaulity(number1,number2);
     }
     else
     {
          printf("Invalid Option ");
     }

}