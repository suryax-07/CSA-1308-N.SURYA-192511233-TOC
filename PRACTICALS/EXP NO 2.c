#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", s);

    n = strlen(s);

    if (s[0] == 'o' && s[n - 1] == '1' && n >= 2)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
