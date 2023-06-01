// Write a programe to print multiplication table of 5 using for loop
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// ...
// 5 x 10 = 50
#include <stdio.h>
void main()
{
     int table = 5, number = 1, answer = 5;

     for (table = 5; number < 11; number++)
     {
          answer = table * number; // 5 * 2
          printf("\n%d x %d = %d ", table, number, answer);
     }
     // printf("\n%d x %d = %d ",table,number,answer);
     // number++;//3
     // answer = table * number; // 5 * 3
     // printf("\n%d x %d = %d ",table,number,answer);
     // number++;//4
     // answer = table * number; // 5 * 4
     // printf("\n%d x %d = %d ",table,number,answer);
}