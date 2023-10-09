#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a dog structure.
 * @d: Pointer to the dog structure to print.
 */
void print_dog(struct dog *d)
{
    if (d)
    {
        printf("Name: %s\n", d->name ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
    }
}
