#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,exp,total,result;

    printf("Enter a whole number: ");
    scanf("%d",&number);

    printf("Enter a exponent: ");
    scanf("%d",&exp);

    total=sumDigits(number);
    result=takeExp(total,exp);

    printf("%d power of the sum of the digits of the number: %d",exp,result);

    return 0;
}
int sumDigits(int a)
{
    int s=0;

    if(a==0){
        return s;
    }else{
        s=s+(a%10);
        s=s+sumDigits(a/10);
        return s;
    }
}
int takeExp(int x,int y)
{
    if(x==0){
        return 0;
    }else if(y==0){
        return 1;
    }else{
        return x*takeExp(x,y-1);
    }
}
