// Write a programe to print following pattern
// 1 , 4 , 9 , 16 , 25 ,36 ..... 10000
#include <stdio.h>
void main()
{
     int number = 1, answer = 0;
     printf("1 ");
     while(answer < 9801)
     {
          number = number + 1;
          answer = number * number;
          printf("%d ", answer);
     }
     // number = number + 1;
     // answer = number * number;
     // printf("%d ",answer);
     // number = number + 1;
     // answer = number * number;
     // printf("%d ",answer);
     // number = number + 1;
     // answer = number * number;
     // printf("%d ",answer);
}