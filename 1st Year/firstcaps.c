#include <stdio.h>
#include <math.h>
#include <ctype.h>

void extract(int n, char str[]) {
    if (str[0] != ' ') {
        printf("%c", toupper(str[0]));
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ') {
            printf("%c", toupper(str[i + 1]));
        }
    }
}

int main() {
    char str[600];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    extract(600, str);
    return 0;
}
