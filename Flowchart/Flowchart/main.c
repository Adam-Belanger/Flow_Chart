#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "People.h"




int main() {
  struct Group group = { {"", 0}, {0,0,0,0,0,0} };
  int total; // Number of people in group
 
  //Add People to event group
  addPeople(&group);

  clear();

  displayGroup(&group);

  return 0;
}


