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
     do{
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
          }
          else if (option == 3)
          {
               int first = 2, second = 1;
               answer = 0;
               printf("%d %d ", first, second); // 2  1
               answer = second + first;         // 3
               first = answer;
               do
               {
                    printf("%d ", answer);
                    answer = answer + second; // 4
                    second = answer;
                    printf("%d ", answer);
                    answer = answer + first; // 7
                    first = answer;
               } while (answer < 300);
          }
          else if (option == 4)
          {
               number = 0;
               answer = 1;
               int temp = 2;
               printf("%d ", number);
               answer = answer + number;
               do
               {
                    printf("%d ", answer);
                    answer = answer + temp;
                    temp = temp + 1;
               } while (answer < 1000);
          }
          else if (option == 5)
          {
               number = 1;
               int flash = 4;
               answer = 0;
               // answer = number;
               printf("%d ", number);
               answer = number + flash;
               printf("%d ", answer);
               do
               {
                    flash = flash + 3;
                    answer = answer + flash;
                    printf("%d ", answer);
               } while (answer < 287);
               // flash = flash + 3;
               // answer = answer + flash;
               // printf("%d ",answer);
          }
          printf("Do you want to continue ?\nPress 0 for exit \nPress any other number to continue ");
          scanf("%d", &option);
     }while(option != 0);
     printf("Goodbyee..");
}