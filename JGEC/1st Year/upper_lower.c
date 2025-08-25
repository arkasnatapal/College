#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Other characters remain unchanged
    }
}

int main() {
    char str[500];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    toggleCase(str);
    printf("Toggled string:\n%s", str);
    return 0;
}
