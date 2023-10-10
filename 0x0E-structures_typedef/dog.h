#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new strucure
 *@name : name of the dog
 *@age : age of the dog
 *@owner: the owner of the dog
 */


struct dog
{

char *name;
float age;
char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);



#endif
