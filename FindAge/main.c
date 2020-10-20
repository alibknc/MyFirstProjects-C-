#include <stdio.h>
#include <stdlib.h>

struct ID
{
    char name[50];
    int day;
    int month;
    int year;
};

int findSmallNumber(struct ID Person[], int n)
{
    int i,j;
    int smallest;

    for(i=0; i<n-1; i++){
        smallest = i;
        for(j=i+1; j<=n-1; j++){
            if(Person[j].year > Person[smallest].year)
                smallest = j;
        }
    }
    return smallest;
};

int main()
{
    int numberOfPersons;
    int i;
    int smallest;

    printf("Enter the number of persons:");
    scanf("%d",&numberOfPersons);

    struct ID list[numberOfPersons];

    for(i=0; i<numberOfPersons; i++){
        printf("Enter the name of the person %d:",i+1);
        scanf("%s",&list[i].name);
        printf("Enter the birthday of person %d:\n",i+1);
        printf("Day:");
        scanf("%d",&list[i].day);
        printf("Month:");
        scanf("%d",&list[i].month);
        printf("Year:");
        scanf("%d",&list[i].year);
        printf("\n");
    }

    printf("Person Informations\n");
    printf("-------------------------------");

    for(i=0; i<numberOfPersons; i++){
        printf("\n%s - %d / %d / %d",list[i].name,list[i].day,list[i].month,list[i].year);
    }

    printf("\n-------------------------------\n\n");

    smallest = findSmallNumber(list, numberOfPersons);

    printf("The Smallest Person's Name: %s\n\n", list[smallest].name);
    printf("Birth Date of the Smallest Person: %d / %d / %d\n",list[smallest].day,list[smallest].month,list[smallest].year);

    return 0;
}
