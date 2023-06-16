// Write a programe to time and name of 3 country
// hours
// minute.second
// name
// we can create array of structure. which is called array of structure.
#include <stdio.h>
struct time
{
     int hours;
     float minutes_seconds;
     char name[15];
};
void main()
{
     struct time country[3];
     int count;
     for (count = 0; count < 3; count++)
     {
          printf("Enter name of country %d ", count + 1);
          scanf("%s", &country[count].name);
          printf("Enter hours for country %d ", count + 1);
          scanf("%d", &country[count].hours);
          printf("Enter minutes.seconds for country %d", count + 1);
          scanf("%f", &country[count].minutes_seconds);
     }
     for (count = 0; count < 3; count++)
     {
          printf("\nName of country %d = %s ", count + 1, country[count].name);
          printf("\nHours : minutes.second = %d : %f ", country[count].hours, country[count].minutes_seconds);
     }
     // printf("Name of country 2 = %s ",country[1].name);
     // printf("\nHours : minutes.second = %d : %f ",country[1].hours,country[1].minutes_seconds);

     // printf("Enter name of country 2 ");
     // scanf("%s",&country[1].name);
     // printf("Enter hours for country 2");
     // scanf("%d",&country[1].hours);
     // printf("Enter minutes.seconds for country 2 ");
     // scanf("%f",country[1].minutes_seconds);
}