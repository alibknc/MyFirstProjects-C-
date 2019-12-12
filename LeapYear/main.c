#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0)
        printf("%d Leap Year\n",year);
    else
        printf("%d Not Leap Year\n",year);
    return(0);
}
