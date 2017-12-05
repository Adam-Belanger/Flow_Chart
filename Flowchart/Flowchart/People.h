#ifndef PEOPLE_H
#define PEOPLE_H
#define STR_NAME_LNG "%99s"
#define STR_SPACE "%s[^\n]"
#pragma once
//NAME: Devin Slauenwhite
//DATE: Nov 30, 2017

//DESC: Vars for flowchart

#include <string.h>
#include <stdio.h>
#include "Charges.h"
#include "Utilits.h"


//For use in Group Struct only
struct Person {
  char name[100]; //Person Name
  int* age; //Person Age
};

struct Group {
  struct Person person[18]; //Max 18 people to a group
  struct Receipt receipt; //Receipt for group of people
  int pCount; //How many people in group
};

void addPeople(struct Group* g);

#endif