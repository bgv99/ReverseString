#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *string)
{
    int string_length = strlen(string);

    for(int i = string_length; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    printf("\n");
    free(string);
}

int main()
{
    char *string = (char *) malloc(sizeof(char) * 1024);

    if(string == NULL)
    {
        return 1;
    }

    printf("Enter a String: ");
    fgets(string, sizeof(char) * 1024, stdin);
    reverseString(string);

    return 0;
}
