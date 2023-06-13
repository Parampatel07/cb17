// Write a programe to store 5 student marks for 5 subject
#include <stdio.h>
void main()
{
     int student[5][5];
     int count = 0, flash = 0, student_total;
     int sum[5];
     float average;
     for (flash = 0; flash < 5; flash++)
     {
          printf("\nEnter marks for student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nEnter marks for subject %d ", count + 1);
               scanf("%d", &student[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          printf("\nMarks for student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nSubject %d = %d ", count + 1, student[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          sum[flash] = 0;
          for (count = 0; count < 5; count++)
          {
               sum[flash] = sum[flash] + student[flash][count];
          }
          printf("\n\nthe total of student %d is %d ", flash + 1, sum[flash]);
     }
     student_total = 0;
     for(count=0;count<5;count++)
     {
          student_total = student_total + sum[count];
     }
     printf("\nThe value of student total is %d ",student_total);
     average = student_total / 5 ;
     printf("\nThe value of average is %f ",average);
     // sum[1] = 0;
     // for(count=0;count<5;count++)
     // {
     //      sum[1] = sum[1] + student[1][count];
     // }
     // printf("\n\nthe total of student 2 is %d ", sum[1]);
     // sum[0]=sum[0]+student[0][1];
     // sum[0]=sum[0]+student[0][2];
     // sum[0]=sum[0]+student[0][3];
     // printf("\nMarks for student 2 ");
     // for(count=0;count<5;count++)
     // {
     //      printf("\nSubject %d = %d ",count+1,student[1][count]);
     // }
     // printf("Subject 2 = %d ",student[0][1]);
     // printf("Subject 3 = %d ",student[0][2]);
     // printf("Subject 4 = %d ",student[0][3]);
     // printf("Subject 5 = %d ",student[0][4]);

     // printf("\nEnter marks for subject 2 ");
     // scanf("%d",&student[1][1]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&student[1][2]);
     // printf("\nEnter marks for subject 2 ");
     // scanf("%d",&student[0][1]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&student[0][2]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&student[0][2]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&student[0][2]);
}