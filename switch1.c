// 5] switch case 
// Write a programe to make a calc 
// -> Addition
// -> subtraction
// -> multiplication
// -> divison
// -> modulus
// -> max
// -> min
// -> equality 
#include<stdio.h>
void main()
{
     int num1 , num2 ,option ,answer ;

     printf("Enter value of num1 ");
     scanf("%d",&num1);
     printf("Enter value of num2 ");
     scanf("%d",&num2);
     printf("Select any one option ");
     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for multiplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for modulus ");
     printf("\nEnter 6 for maximum ");
     printf("\nEnter 7 for minimum ");
     printf("\nEnter 8 for equality ");
     scanf("%d",&option);


     switch(option)
     {
          case 1:
          answer = num1+num2;
          printf("the answer is %d",answer);
          break;

          case 2:
          answer = num1 - num2;
          printf("the answer is %d ",answer);
          break;

          case 3:
          answer = num1 * num2;
          printf("the answer is %d ",answer);
          break;

          case 4:
          answer = num1 / num2;
          printf("the value of answer is %d ",answer);
          break;

          case 5:
          answer= num1 % num2;
          printf("the value of answer is %d ",answer);
          break;

          case 6:
          if(num1 > num2)
          {
               printf("the value of num1 is greater ");
          }
          else if(num2 > num1)
          {
               printf("the value of num2 is greater ");
          }
          break;

          case 7:
          if(num1 < num2)
          {
               printf("the value of num1 is smaller ");
          }
          else
          {
               printf("the value of num2 is smaller ");
          }
          break;

          case 8:
          if(num1 == num2)
          {
               printf("the value of both number is same ");
          }
          else
          {
               printf("the value of both number is not same ");
          }
          break;
     }
     printf("\nGoodbyee..");
}