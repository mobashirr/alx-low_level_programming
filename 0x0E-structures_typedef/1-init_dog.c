#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a
 *@d: pointer
 *@name:name
 *@age: age
 *@owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL) {

        if (name != NULL && owner != NULL) {
            d->name = strdup(name);
            d->owner = strdup(owner);
        } 
	else {
            d->name = name;
            d->owner = owner;
        }

        d->age = age;
    }
}
