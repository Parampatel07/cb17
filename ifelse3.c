// Write a programe to findout wether the user given shape is square or not take lenght and width as input 
#include<stdio.h>
void main()
{
     float height , width ,answer;

     printf("Enter value of height ");
     scanf("%f",&height);
     printf("Enter value of width ");
     scanf("%f",&width);

     if(height == width)
     {
          printf("it is square ");
          answer = height * height;

     }
     else
     {
          printf("it is not a square ");
          answer = height * width ;

     }
     printf("\nthe area of shape is %f ",answer);
     printf("\nGoodbyee...");
}