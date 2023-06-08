// Write a programe to take 5 cricketer run and find total of all also find average and also find highest
#include <stdio.h>
void main()
{
     int runs[5];
     int count = 0,flash=0;
     int total = 0, temp = 0;
     float average = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter value of run for batsmen %d ", count + 1);
          scanf("%d", &runs[count]);
     }
     for (count = 0; count < 5; count++)
     {
          printf("\nruns for batsmen %d = %d ", count + 1, runs[count]);
     }
     total = 0;

     for (count = 0; count < 5; count++)
     {
          total = total + runs[count];
     }
     printf("\nthe value of total is %d ", total);
     average = total / 5;
     printf("\nthe value of average is %f ", average);

     for(flash=0;flash<5;flash++)
     {
          for (count = flash+1; count < 5; count++)
          {
               if (runs[flash] < runs[count])
               {
                    temp = runs[flash];
                    runs[flash] = runs[count];
                    runs[count] = temp;
               }
          }
     }
     // for (count = 2; count < 5; count++)
     // {
     //      if (runs[1] < runs[count])
     //      {
     //           temp = runs[1];
     //           runs[1] = runs[count];
     //           runs[count] = temp;
     //      }
     // }
     // for (count = 3; count < 5; count++)
     // {
     //      if (runs[2] < runs[count])
     //      {
     //           temp = runs[2];
     //           runs[2] = runs[count];
     //           runs[count] = temp;
     //      }
     // }

     // for (count = 4; count < 5; count++)
     // {
     //      if (runs[3] < runs[count])
     //      {
     //           temp = runs[3];
     //           runs[3] = runs[count];
     //           runs[count] = temp;
     //      }
     // }
     // if(runs[1]<runs[3])
     // {
     //      temp = runs[1];
     //      runs[1] = runs[3];
     //      runs[3]=temp;
     // }

     for (count = 0; count < 5; count++)
     {
          printf("\nruns for batsmen %d = %d ", count + 1, runs[count]);
     }
     // if(runs[0]<runs[2])
     // {
     //      temp = runs[0];
     //      runs[0]=runs[2];
     //      runs[2]=temp;
     // }
     // if(runs[0]<runs[3])
     // {
     //      temp=runs[0];
     //      runs[0]=runs[3];
     //      runs[3]=temp;
     // }

     // 0 +10
     // total = total + runs[1]; // 10 +20
     // total = total + runs[2];//30+30
     // total = total + runs[3];//60+40
     // total = total + runs[4];//100+50

     // printf("runs for batsmen 2 = %d", runs[1]);
     // printf("runs for batsmen 3 = %d",runs[2]);
     // printf("runs for batsmen 3 = %d",runs[2]);
     // printf("runs for batsmen 3 = %d",runs[2]);
     // printf("Enter value of run for batsmen 2 ");
     // scanf("%d",&runs[1]);
     // printf("Enter value of run for batsmen 3 ");
     // scanf("%d",&runs[2]);
     // printf("Enter value of run for batsmen 4 ");
     // scanf("%d",&runs[3]);
     // printf("Enter value of run for batsmen 5 ");
     // scanf("%d",&runs[4]);
}
