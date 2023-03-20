/**
 * init_dog - initialize a variable of type dog
 * @*d: first parameter
 * @name: Second parameter
 * @age: third parameter
 * @owner: forth parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct(dog));
	
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}	
