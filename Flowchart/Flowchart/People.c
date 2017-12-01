#include "People.h"
#include "Utilits.h"

void addPerson(struct Group* group)
{
	char name[100];
	int age;

	printf("What is your name? ");
	loadStringToMem(STR_SPACE, &name);

	printf("How old are you? ");
	age = getInt();

	*group->person[0]->name = name;
	*group->person[0]->age = age;

	group->pCount++;
}
