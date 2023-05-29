// 1 8 27 64 .... 10000
#include <stdio.h>
void main()
{
     int number = 1, answer = 1;

     while(answer < 10000 )
     {
          printf("%d ", answer);
          number = number + 1;
          answer = number * number * number;
     }
     // printf("%d ",answer);
     // number = number + 1;
     // answer = number * number * number ;
     // printf("%d ",answer);
     // number++;
     // answer = number * number * number ;
     // printf("%d ",answer);
}