#include <stdio.h>

void concat(int n, int m, char ch[], char ch1[]) {
    char ch3[500];
    int i, j;

    // Copy first string into ch3
    for (i = 0; ch[i] != '\0'; i++) {
        ch3[i] = ch[i];
    }

    // Add space
    ch3[i] = ' ';

    // Copy second string into ch3
    for (j = 0; ch1[j] != '\0'; j++, i++) {
        ch3[i] = ch1[j];
    }

    // Null terminate
    ch3[i] = '\0';

    printf("Merged string: %s\n", ch3);
}

int main() {
    char ch[100];
    char ch1[200];

    printf("Enter strings:\n");
    fgets(ch, sizeof(ch), stdin);
    fgets(ch1, sizeof(ch1), stdin);

    // Remove newline from first string
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == '\n') {
            ch[i] = '\0';
            break;
        }
    }

    // Remove newline from second string
    for (int i = 0; ch1[i] != '\0'; i++) {
        if (ch1[i] == '\n') {
            ch1[i] = '\0';
            break;
        }
    }

    concat(100, 200, ch, ch1);

    return 0;
}
