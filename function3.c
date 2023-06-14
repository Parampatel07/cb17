// Write a programe to find area of cylinder 
// => 2 * pi * r* h + 2 * pi * r * r 
#include<stdio.h>
float getPi()
{
     float pi ;
     pi = 3.14159;
     return pi;
}
void getCylinderArea(float radius,float height)
{
     float area;
     area = (2 * getPi() * radius * height) + (2 * getPi() * radius * radius);
     printf("the area of cylinder is %f ",area);
}    
void main()
{
     float radius,height;
     printf("Enter value of radius ");
     scanf("%f",&radius);
     printf("Enter value of height ");
     scanf("%f",&height);
     // printf("The value of pi is %f",getPi());
     getCylinderArea(radius,height);
}