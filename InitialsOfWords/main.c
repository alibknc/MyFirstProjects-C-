#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[100];
    int i;

    printf("Enter the sentence : ");
    gets(sentence);

    printf("%c \n",sentence[0]);

    for(i=0;sentence[i]!='\0';i++){
        if(sentence[i]==' ' && sentence[i+1]!=' '){
            printf("%c \n",sentence[i+1]);
        }
    }

    return 0;
}
