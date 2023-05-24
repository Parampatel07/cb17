// Write a programe to findout bmi of user and also find there cateogry
// bmi = (height * height) in meter / weight in kg 
#include <stdio.h>
void main()
{
     int foot, inch;
     float weight,foot_meter,inch_meter,height,bmi;

     printf("Enter your height in foot ");
     scanf("%d", &foot);
     printf("Enter your height in inch ");
     scanf("%d", &inch);
     printf("Enter your weight ");
     scanf("%f", &weight);

     foot_meter = foot / 3.281;
     // printf("the value of foot meter is %f ",foot_meter);

     inch_meter = inch / 39.37;
     // printf("\nthe value of inch meter is %f ",inch_meter);

     height = foot_meter + inch_meter;
     // printf("\nthe value of total height of user is %f ",height);

     bmi  = weight / (height * height);
     printf("the value of bmi is %f \n",bmi);

     if(bmi < 18.5)
     {
          printf("you are underweight ");
     }
     else if(bmi >=  18.5 && bmi < 24.9)
          printf("your are normal weight ");
     else if(bmi >= 25 && bmi < 29.9)
          printf("you are overweight ");
     else
          printf("you are obese ");

     printf("\nGoodbyee..");
}