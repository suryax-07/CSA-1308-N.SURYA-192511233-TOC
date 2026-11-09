#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, n, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", s);

    n = strlen(s);

    if (n % 2 != 0)
        valid = 0;
    else
    {
        for (i = 0; i < n/2; i++)
        {
            if (s[i] != '0')
                valid = 0;
        }

        for (i = n/2; i < n; i++)
        {
            if (s[i] != '1')
                valid = 0;
        }
    }

    if (valid)
        printf("String is Accepted");
    else
        printf("String is Rejected");

    return 0;
}
