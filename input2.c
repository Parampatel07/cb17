// Write a programe to find area of rectangle 
//  lenght * breath 
#include<stdio.h>
void main()
{
     float lenght =0 ,breath =0,answer=0 ;

     printf("Enter value of lenght ");
     scanf("%f",&lenght);
     printf("Enter value of breath ");
     scanf("%f",&breath);

     printf("the value of lenght is %f and value of breath is %f ",lenght,breath);

     answer = lenght * breath ;
     printf("\nThe value of answer is %f ",answer);
}