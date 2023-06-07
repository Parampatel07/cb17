// Example of array
// Write a programe to store marks for 5 subject
#include <stdio.h>
void main()
{
     int subject[5], count = 0, total = 0;
     while (count < 5)
     {
          printf("Enter marks for subject %d ", count + 1);
          scanf("%d", &subject[count]);
          count++;
     }
     for (count = 0; count < 5; count++)
     {
          printf("\nthe value of subject %d = %d ", count + 1, subject[count]);
     }
     total = 0;
     count=0;
     do
     {
          total = total + subject[count];
          count++;
     }while(count<5);
     printf("\nthe total of all subject is %d ",total);
     // 0 + 10
     // total = total + subject[1]; // 10 + 20
     // total = total + subject[2]; // 30 + 30
     // total = total + subject[3]; // 60 + 40
     // total = total + subject[4]; // 100 + 50
     // printf("\nthe value of subject 2 = %d ",subject[1]);
     // printf("\nthe value of subject 3 = %d ",subject[2]);
     // printf("\nthe value of subject 4 = %d ",subject[3]);
     // printf("\nthe value of subject 5 = %d ",subject[4]);
     // printf("Enter marks for subject 2 ");
     // scanf("%d ",&subject[1]);
     // printf("Enter marks for subject 3 ");
     // scanf("%d ",&subject[2]);
     // printf("Enter marks for subject 4 ");
     // scanf("%d ",&subject[3]);
     // printf("Enter marks for subject 5 ");
     // scanf("%d ",&subject[4]);
}