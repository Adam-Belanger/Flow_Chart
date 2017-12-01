#include "People.h"

void addPerson(struct Group* group)
{
	char name[100];
	int age;

	*group->person[0]->name = name;
	*group->person[0]->age = age;

	group->pCount++;
}
