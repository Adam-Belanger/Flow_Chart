#include "People.h"

void addPeople(struct Group* g) {
  int count = g->pCount;
  char name[51] = "";
  int age;

  printf("Hello there! What is your name? ");
  loadStringToMem("%s", name);

  printf("Hello %s, welcome to A-LA-Carte Entertainment. How old are you?", name);
  age = getInt();

  strcpy(g->person[count].name, name);
  g->person[count].age = age;
  //Add one to person count
  count = g->pCount++;
}