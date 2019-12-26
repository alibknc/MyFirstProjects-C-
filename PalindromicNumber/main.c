#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d",&number);

    if(number==findOpposite(number)){
        printf("%d is a palindromic number.",number);
    }else{
        printf("%d is not a palindromic number.",number);
    }
    return 0;
}
int findOpposite(int x)
{
    int S=0,b;

    while(x>0){
        b=x%10;
        S=(S*10)+b;
        x=x/10;
    }
    return S;
}
