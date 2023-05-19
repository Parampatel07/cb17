// Write a programe to findout bmi of user 
// bmi = weight (kg) / hieght (meter)
#include<stdio.h>
void main()
{
     float weight ,foot_meter , inch_meter , total_height , bmi;
     int foot , inch ;

     printf("Enter value of weight ");
     scanf("%f",&weight);
     printf("Enter value of height in foot ");
     scanf("%d",&foot);
     printf("Enter value of height in inch ");
     scanf("%d",&inch);

     foot_meter = foot / 3.281 ;
     // printf("the value of foot meter is %f ",foot_meter);

     inch_meter = inch / 39.37 ;
     // printf("\nthe value of inch meter is %f ",inch_meter);

     total_height = foot_meter + inch_meter ;
     // printf("\nthe value of total hieght is %f ",total_height);

     bmi = weight / (total_height * total_height) ;
     printf("\nthe value of bmi is %f ",bmi);
}