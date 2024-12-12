#include <stdio.h>
#include <stdlib.h>

char get_char(char* prompt)
{
    char returnValue;
    printf("%s",prompt);
    scanf("%c",&returnValue);
    return returnValue;
}

double get_double(char* prompt)
{
    double returnValue;
    printf("%s",prompt);
    scanf("%lf",&returnValue);
    return returnValue;
}

float get_float(char* prompt)
{
    float returnValue;
    printf("%s",prompt);
    scanf("%f",&returnValue);
    return returnValue;
}

int get_int(char* prompt)
{
    int returnValue;
    printf("%s",prompt);
    scanf("%d",&returnValue);
    return returnValue;
}

char* get_string(char* prompt)
{
    char* returnValue = malloc(200*sizeof(char)); /* We need to allocate memory for strings because 
    its storage can be changeable depending on the length of string. Altough user don't encounter any problem while
    giving less than or equal to 200 character. There will be problem if he gives more than 200 character. In order to solve
    this, we need to use dynamicly allocated memory. */
    printf("%s",prompt);
    scanf("%s",returnValue);
    return returnValue;
}

int main(void) 
{
    char* name = get_string("What is your name: ");
    printf("%s",name);
}