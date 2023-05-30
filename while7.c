// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include <stdio.h>
void main()
{
     int number = 0, answer = 0, temp = 1;
     printf("%d ", number);

     while(answer < 990)
     {
          answer = answer + temp;
          printf("%d ", answer);
          temp = temp + 1;
     }
     // answer = answer + temp;
     // printf("%d ",answer);
     // temp = temp + 1 ;
     // answer = answer + temp;
     // printf("%d ",answer);
     // temp = temp + 1;
     // answer = answer + temp;
     // printf("%d ",answer);
}
