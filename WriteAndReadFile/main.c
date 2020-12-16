#include <stdio.h>
#include <stdlib.h>
#define FILE_PATH "file.txt"

int main()
{
    int character,i;
    char nums[100];
    char buf[100];
    FILE *file = fopen(FILE_PATH, "w");

    printf("Enter number: ");
    fgets(nums,100,stdin);

    if(file == NULL){
        printf("Failed to Open File\n");
        exit(1);
    }

    for(i=0; ;i++){
        character = nums[i];

        if(character == '\n')
            break;

        switch(character){
        case '0':
            fputs("zero ",file);
            break;
        case '1':
            fputs("one ",file);
            break;
        case '2':
            fputs("two ",file);
            break;
        case '3':
            fputs("three ",file);
            break;
        case '4':
            fputs("four ",file);
            break;
        case '5':
            fputs("five ",file);
            break;
        case '6':
            fputs("six ",file);
            break;
        case '7':
            fputs("seven ",file);
            break;
        case '8':
            fputs("eight ",file);
            break;
        case '9':
            fputs("nine ",file);
            break;
        default:
            break;
        }
    }

    fclose(file);

    file = fopen(FILE_PATH, "r");

    fgets(buf,100,file);
    printf("%s\n",buf);
    printf("Saved to file.\n");

    fclose(file);
}
