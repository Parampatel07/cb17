// Write a programe to findout area of cylinder take input from user 
#include<stdio.h>
void main()
{
     float height , radius ,answer ;

     printf("Enter value of height ");
     scanf("%f",&height);
     printf("Enter value of radius ");
     scanf("%f",&radius);

     printf("the value of height is %.2f and value of radius is %.2f ",height,radius);

     answer = (2 * 3.14159 * radius * height) + (2 * 3.14159 * (radius * radius));

     printf("\nthe value of answer is %.2f ",answer);
}