// Write a programe to print given number in words only 2 digit number
// -> number = 78
// seven eight
#include <stdio.h>
void main()
{
     int number, first, second;

     printf("Enter value of number only 2 digit number ");
     scanf("%d", &number);

     first = number / 10;
     second = number % 10;

     switch (first)
     {
     case 1:
          printf("One ");
          break;

     case 2:
          printf("Two ");
          break;

     case 3:
          printf("Three ");
          break;

     case 4:
          printf("Four ");
          break;

     case 5:
          printf("Five ");
          break;

     case 6:
          printf("Six ");
          break;

     case 7:
          printf("Seven ");
          break;

     case 8:
          printf("Eight ");
          break;

     case 9:
          printf("Nine ");
          break;

     case 0:
          printf("Zero ");
          break;
     }

     switch (second)
     {
     case 1:
          printf("One ");
          break;

     case 2:
          printf("Two ");
          break;

     case 3:
          printf("Three ");
          break;

     case 4:
          printf("Four ");
          break;

     case 5:
          printf("Five ");
          break;

     case 6:
          printf("Six ");
          break;

     case 7:
          printf("Seven ");
          break;

     case 8:
          printf("Eight ");
          break;

     case 9:
          printf("Nine ");
          break;

     case 0:
          printf("Zero ");
          break;
     }
}