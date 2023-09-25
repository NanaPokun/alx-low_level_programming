#include "main.h"

/***/
char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack; // Found the substring.
        }
        haystack++;
    }

    return NULL; // Substring not found.
}

