#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char FirstName[25];
    char i ;
    printf("please enter your first name:");
    scanf("%s", &FirstName);
    for ( i = 0; i < 25; i++)
    {
        if (FirstName[i] != '\0')
        {
            printf("%c \n", FirstName[i]);
        }
        else{
            break;
        }
    }


}
