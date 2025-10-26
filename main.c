#include <stdio.h>
#include <string.h>

int main(void) {
    char *str1 = "C is the best programming language";
    char *str2 = "C++ is the best programming language";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Print str1 from full length down to 1 character
    for (int i = len1; i > 0; i--) {
        printf("%.*s\n", i, str1);
    }

    // Print str2 from 1 character up to full length
    for (int i = 1; i <= len2; i++) {
        printf("%.*s\n", i, str2);
    }

    return 0;
}
