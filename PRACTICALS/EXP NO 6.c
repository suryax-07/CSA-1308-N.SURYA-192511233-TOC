#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i = 0, j, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", s);

    j = strlen(s) - 1;

    while (i < j && s[i] == '0' && s[j] == '0')
    {
        i++;
        j--;
    }

    while (i <= j)
    {
        if (s[i] != '1')
        {
            valid = 0;
            break;
        }
        i++;
    }

    if (valid)
        printf("String is Accepted");
    else
        printf("String is Rejected");

    return 0;
}
