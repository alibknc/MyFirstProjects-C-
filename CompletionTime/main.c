#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total,year,month,day;

    printf("Enter how many days the end time is: ");
    scanf("%d",&total);

    calculate(total,&year,&month,&day);

    printf("\t It lasts for %d years, %d months and %d days.",year,month,day);
}

void calculate(int total, int *year, int *month, int *day)
{
    *month=(total%365)/30;
    *day=(total%365)%30;
    *year=total/365;
}
