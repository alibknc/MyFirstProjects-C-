#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,exponent,total,result;

    printf("Enter an integer: ");
    scanf("%d",&number);

    printf("Please enter an exponent for number: ");
    scanf("%d",&exponent);

    total=additionNumbers(number);
    result=exponentiation(total,exponent);

    printf("The %d exponent of the sum of the integer's digits is: %d",exponent,result);

    return 0;
}
int additionNumbers(int a)
{
    int s=0;

    if(a==0){
        return s;
    }else{
        s=s+(a%10);
        s=s+additionNumbers(a/10);
        return s;
    }

}
int exponentiation(int x,int y)
{

    if(x==0){
        return 0;
    }else if(y==0){
        return 1;
    }else{
        return x*exponentiation(x,y-1);
    }
}
