// Write a programe to findout wether user is eligilbe for voting or not
#include <stdio.h>
void main()
{
     int age;

     printf("Enter value of age ");
     scanf("%d", &age);

     // check
     if (age >= 18)
     {
          printf("you are eligible for voting ");
     }
     printf("\nGoodbyee..");
}