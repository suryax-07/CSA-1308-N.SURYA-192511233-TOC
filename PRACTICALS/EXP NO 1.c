#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n;

    printf("Enter a string: ");
    scanf("%s", s);

    n = strlen(s);

    if (s[0] == 'a' && s[n - 1] == 'a')
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
