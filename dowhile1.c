// Write a programe to create a calc which continue to run till user says exit
// ->addition
// ->subtraction
// ->multiplication
// ->division
// ->modulus
// ->max
// ->min
// ->eqaulity
#include <stdio.h>
void main()
{
     int num1, num2, option;

     do
     {
          printf("Enter value of num1 ");
          scanf("%d", &num1);
          printf("Enter value of num2 ");
          scanf("%d", &num2);

          printf("Enter 1 for addition ");
          printf("\nEnter 2 for subtraction ");
          printf("\nEnter 3 for multiplication ");
          printf("\nEnter 4 for division ");
          printf("\nEnter 5 for modulus ");
          printf("\nEnter 6 for max ");
          printf("\nEnter 7 for min ");
          printf("\nEnter 8 for eqaulity ");
          scanf("%d", &option);

          if (option == 1)
          {
               printf("the value of answer is %d ", num1 + num2);
          }
          else if (option == 2)
          {
               printf("the value of answer is %d ", num1 - num2);
          }
          else if (option == 3)
          {
               printf("the value of answer is %d ", num1 * num2);
          }
          else if (option == 4)
          {
               printf("the value of answer is %f ", num1 / num2);
          }
          else if (option == 5)
          {
               printf("the value of answer is %f ", num1 % num2);
          }
          else if (option == 6)
          {
               if (num1 > num2)
               {
                    printf("the value of num1 is greater ");
               }
               else if (num1 < num2)
               {
                    printf("the value of num2 is greater ");
               }
          }
          else if (option == 7)
          {
               if (num1 < num2)
               {
                    printf("the value of num1 is smaller ");
               }
               else if (num2 < num1)
               {
                    printf("the value of num2 is smaller ");
               }
          }
          else if (option == 8)
          {
               if (num1 == num2)
               {
                    printf("The value of both are same ");
               }
               else
               {
                    printf("the value of both is not same ");
               }
          }
          else
          {
               printf("invalid input ");
          }
          printf("Press 0 to exit \n any other number to continue ");
          scanf("%d", &option);
     }while(option!=0);    
}