// Write a programe to create a pattern printer give option for following
// 1 , 4 , 9 , 16 , 25 ,36 ..... 10000 ->square

// 1 8 27 64 .... 10000 -> cube

// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300 - > lucas series

// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000 - > triangular number

// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 300 -- > pentagonal numberr
#include <stdio.h>
void main()
{
     int option;
     int number = 1, answer;
     printf("\nSelect any one patter to print ");
     printf("\nEnter 1 for square ");
     printf("\nEnter 2 for cube");
     printf("\nEnter 3 for lucas ");
     printf("\nEnter 4 for triangular number ");
     printf("\nEnter 5 for pentagonal number ");
     scanf("%d", &option);

     if (option == 1)
     {
          // sqaure
          number = 1;
          do
          {
               answer = number * number;
               printf("%d ", answer);
               number++;
          } while (answer < 9801);
          // answer = number * number;
          // printf("%d ",answer);
          // number++;
          // answer = number * number;
          // printf("%d ",answer);
     }
     else if (option == 2)
     {
          number = 1;
          answer = 1;
          do
          {
               printf("%d ", answer);
               number++;
               answer = number * number * number;
          } while (answer < 10000);
          // printf("%d ",answer);
          // number++;
          // answer = number * number * number;
          // printf("%d ",answer);
          // number++;
          // answer = number * number * number;
          // printf("%d ",answer);
     }
     else if (option == 3)
     {
          int first = 2, second = 1;
          answer = 0;
          printf("%d %d ", first, second); // 2  1
          answer = second + first;//3
          first = answer;
          printf("%d ", answer);
          answer = answer + second;//4
          second =answer;
          printf("%d ", answer);
          answer = answer + first;//7
          printf("%d ", answer);
          answer = answer + second;
          printf("%d ", answer);
     }
     else if (option == 4)
     {
          number = 0;
          answer = 1;
          int temp = 2;
          printf("%d ", number);
          answer = answer + number;
          do{
               printf("%d ", answer);
               answer = answer + temp;
               temp = temp + 1;
          }while(answer < 1000);
     }
}