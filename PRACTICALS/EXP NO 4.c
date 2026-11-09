#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, valid = 1;

    printf("Enter a string: ");
    scanf("%s", s);

    if (s[0] != '0' || s[strlen(s)-1] != '1')
        valid = 0;

    for (i = 1; i < strlen(s)-1; i++)
    {
        if (s[i] != '0' && s[i] != '1')
            valid = 0;
    }

    if (valid && strlen(s) >= 2)
        printf("String is Accepted");
    else
        printf("String is Rejected");

    return 0;
}
