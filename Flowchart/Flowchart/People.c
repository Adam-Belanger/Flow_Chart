#include "People.h"

void addPeople(struct Group* g) {
  int count = g->pCount;
  char name[51] = "";
  int age;
  int total;
  int counter = 0;

  printf("Hello, How many people will be joining you? ");
  total = getInt();

  clear();

  for (counter = 0; counter < total; counter++) {
    title();
    printf("\nGreat! Person #%d, what is your name? ", counter +1);
    loadStringToMem("%s", name);

    printf("\nHello %s, welcome to A-LA-Carte Entertainment. How old are you? ", name);
    age = getInt();

    strcpy(g->person[count].name, name);
    g->person[count].age = age;
    //Add one to person count
    count = ++g->pCount;

    clear();
  }
}

void displayGroup(struct Group* g){
  int count = g->pCount;
  int i = 0;
  for (i; i < count; i++) {
    printf("Name: %5s | Age: %3d\n", g->person[i].name,g->person[i].age);
  }
}