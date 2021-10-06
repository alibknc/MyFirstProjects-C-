#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    int N, i;

    printf("Enter the number of persons: ");
    scanf("%d",&N);

    struct Person *persons = (struct Person*)malloc(N*sizeof(struct Person));

    for(i=0; i<N; i++){
        printf("Enter the name of the %d. person: ",i+1);
        fflush(stdin);
        fgets(persons[i].name,50,stdin);
        fflush(stdin);
        persons[i].name[strlen(persons[i].name)-1]='\0';
        printf("Enter the age of the %d. person: ",i+1);
        scanf("%d",&persons[i].age);
    }

    int isWritten[N];

    for(i=0; i<N; i++)
    {
        isWritten[i]=0;
    }
    printf("\nIndex sorted by name:\n");
    char smallestName[100];
    int smallestIndex,j;
    for(i=0; i<N; i++){
        strcpy(smallestName,"\n\n");
        for(j=0; j<N; j++)
        {
            if(isWritten[j]==0)
            {
                if(!strcmp(smallestName,"\n\n")){
                    strcpy(smallestName,persons[j].name);
                    smallestIndex=j;
                }
                else{
                    if(strcmp(persons[j].name,smallestName)<0){
                        strcpy(smallestName,persons[j].name);
                    smallestIndex=j;
                    }
                }
            }
        }
        printf("%s %d\n",smallestName,persons[smallestIndex].age);
        isWritten[smallestIndex]=1;
    }
    int biggestAge;

    for(i=0; i<N; i++)
    {
        isWritten[i]=0;
    }

    printf("\nRanking by age from largest to smallest:\n");
    for(i=0; i<N; i++)
    {
        biggestAge=-1;
        for(j=0; j<N; j++)
        {
            if(isWritten[j]==0)
            {
                if(biggestAge==-1){
                    biggestAge=persons[j].age;
                    smallestIndex=j;
                }
                else{
                    if(biggestAge<persons[j].age){
                        biggestAge=persons[j].age;
                    smallestIndex=j;
                    }
                }
            }
        }
        printf("%s %d\n",persons[smallestIndex].name,persons[smallestIndex].age);
        isWritten[smallestIndex]=1;
    }

    return 0;
}
