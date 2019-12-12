#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Please enter an integer: ");
    scanf("%d",&number);

    if(number%2){
        printf("Integer is a single number\n");
    }else{
        printf("Integer is a double number\n");
    }
    return 0;
}
