// lucas pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300
#include <stdio.h>
void main()
{
     int first = 2;
     int second = 1;
     int answer = 0;

     printf("%d ", first);
     printf("%d ", second);

     answer = first + second;
     first = answer;
     printf("%d ", answer);

     while(answer < 123)
     {
          answer = answer + second;
          second = answer;
          printf("%d ", answer);

          answer = first + answer;
          first = answer;
          printf("%d ", answer);
     }

     // answer = second + answer;
     // second = answer ;
     // printf("%d ",answer);

     // answer = first + answer;
     // printf("%d ",answer);
}