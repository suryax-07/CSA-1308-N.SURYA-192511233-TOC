#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", s);

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            valid = 0;
            break;
        }
    }

    if (valid && strstr(s, "101") != NULL)
        printf("String is Accepted");
    else
        printf("String is Rejected");

    return 0;
}
