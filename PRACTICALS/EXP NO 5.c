#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", s);

    i = 0;
    j = strlen(s) - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            valid = 0;
            break;
        }
        i++;
        j--;
    }

    if (valid)
        printf("String is Accepted");
    else
        printf("String is Rejected");

    return 0;
}
