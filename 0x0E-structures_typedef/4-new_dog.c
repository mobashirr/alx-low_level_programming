#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog_t struct
 *@name: name
 *@age: age
 *@owner: owner
 *Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;

p = (dog_t *)malloc(sizeof(dog_t));

if (p == NULL)
{
return (NULL);
}

p->name = strdup(name);
p->owner = strdup(owner);

if (p->name == NULL || p->owner == NULL)
{
if (p->name)
free(p->name);
if (p->owner)
free(p->owner);

if (p->owner && p->name)
free(p);
return (NULL);
}
p->age = age;

return (p);
}
