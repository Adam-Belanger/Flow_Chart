//NAME: Devin Slauenwhite
//DATE: Nov 30, 2017

//DESC: Vars for flowchart

#include "Charges.h"

struct Person {
  char name[100]; //Person Name
  int age; //Person Age
};

struct Group {
  Person person[18]; //Max 18 people to a group
  Receipt receipt; //Receipt for group of people
};