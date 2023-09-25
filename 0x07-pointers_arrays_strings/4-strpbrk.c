$inlude "main.h"

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        for (int i = 0; accept[i] != '\0'; i++) {
            if (*s == accept[i]) {
                return s;
            }
        }
        s++;
    }

    return NULL; // No matching character found.
}

