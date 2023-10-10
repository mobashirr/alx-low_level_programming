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

d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);

free(d->name);
free(d->owner);
}
