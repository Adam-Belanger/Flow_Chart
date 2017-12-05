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
   
    if (age < 18) {
      g->person[counter].cost += .50;
      g->receipt.Cover += .50;
    }
    else if (age >= 65) {
      g->person[counter].cost += 1.25;
      g->receipt.Cover += 1.25;
    }
    else {
      g->person[counter].cost += 5.50;
      g->receipt.Cover += 5.50;
    }
    
    //Add one to person count
    count = ++g->pCount;


    clear();
  }
}

void displayGroup(struct Group* g){
  int count = g->pCount;
  int i = 0;
  for (i; i < count; i++) {
    printf("Name: %5s | Age: %3d | Cost: %5.2f\n", g->person[i].name,g->person[i].age, g->person[i].cost);

  }
}