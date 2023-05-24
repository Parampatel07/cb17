// 8) Write a programe to findout total electricty bill for user take unit as input 
// -> unit = 150
// unit 
// less than 100 = 1
// 100 - 200 = 2
// 200 - 300 = 3
// more than 300 = 5
#include<stdio.h>
void main()
{
     int unit , price = 0 , total_bill;

     printf("Enter your units ");
     scanf("%d",&unit);

     if(unit <= 100)
     {
          price = 1;
     }
     if(unit > 100 && unit<=200)
     {
          price = 2 ;
     }
     if (unit >200 && unit <= 300)
     {
          price = 3;
     }
     if (unit > 300)
     {
          price = 5;
     } 
     total_bill = unit * price ;
     printf("the value of total bill is %d",total_bill);
}