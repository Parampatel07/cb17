// Write a programe to store student's name , percentange, rollno for 1 student 
// we can create array inside structure. which is called array within structure.
#include<stdio.h>
struct student_data
{
     int rollno;
     float percentage;
     char name[25];
};
void main()
{
     struct student_data student1 ;
     // int student1 ;

     printf("Enter rollno of student ");
     scanf("%d",&student1.rollno);
     // student1[0]
     printf("Enter student name ");
     scanf("%s",&student1.name);
     printf("Enter percentage of student ");
     scanf("%f",&student1.percentage);

     printf("Roll no = %d ",student1.rollno);
     printf("\nName = %s ",student1.name);
     printf("\nPercentage = %f ",student1.percentage);
}