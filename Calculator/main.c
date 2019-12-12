#include <stdio.h>
#include <stdlib.h>

int main() {
    char operation;
    float number1,number2;

    printf("Choose operation(+, -, *, /): ");
    scanf("%c",&operation);

    printf("Enter two numbers: ");
    scanf("%f %f",&number1,&number2);

    switch(operation)
    {
    case '+':
        printf("%f + %f = %f",number1,number2,number1+number2);
        break;
    case '-':
        printf("%f - %f = %f",number1,number2,number1-number2);
        break;
    case '*':
        printf("%f * %f = %f",number1,number2,number1*number2);
        break;
    case '/':
        printf("%f / %f = %f",number1,number2,number1/number2);
        break;
    default:
        printf("Error! False Choose");
    }
    return 0;
}
