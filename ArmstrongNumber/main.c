#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number==0)
    {
        printf("Application terminated...");
    }
    else if(number==isArmstrong(number))
    {
        printf("%d is one of the Armstrong numbers.",number);
    }
    else
    {
        printf("%d is NOT one of the Armstrong numbers.",number);
    }

}
int isArmstrong(int x)
{
    int a,s=0;

    while(x>0)
    {
        a=x%10;
        s=s+(a*a*a);
        x=x/10;
    }
    return s;
}

