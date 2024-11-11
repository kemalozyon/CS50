#include <stdio.h>
#include <string.h>

//Data Structures -> it allow us to create our own data type
typedef struct 
{
    char* name; 
    char* number;
}person;


int main(void){
    person people[3];
    people[0].name = "Kemal";
    people[0].number = "05010516868";
    people[1].name = "Ekrem";
    people[1].number = "05327627670";
    people[2].name = "Cennet";
    people[2].number = "05055915387";

    char name[100];
    printf("Whose phone number do you want to learn: ");
    scanf("%s",name);

    for (int i = 0; i<3; i++){
        if(strcmp(name, people[i].name) == 0){
            printf("The phone number is: %s\n",people[i].number);
            return 0;
        }
    }
    printf("The person you have searched for is not exist\n");
    return 1;
}