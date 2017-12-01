#include "Charges.h"


double getDiscount(int numOfPeople) {
  switch (numOfPeople)
  {
  case 1:
    return 0;
  case 2:
    return TwoSpecial;
    break;
  case 3:
    return ThreeSpecial;
    break;
  case 4:
    return FourSpecial;
    break;
  default:
    return FiveSpecial;
  }
}


//Child = 0.50; //INDEX: 0
//Adult = 5.50; //INDEX: 1
//Senior = 1.25; //INDEX: 2
double getAdmitPrice(int index) {
  switch (index)
  {
  case 0:
    return Child;
    break;
  case 1:
    return Adult;
    break;
  case 2:
    return Senior;
    break;
  default:
    return 0; //ERROR
    break;
  }
}

//Music_Mantinee = 88.00; //INDEX: 0
//Music_Evening = 175.00; //INDEX: 1
//Theatre_Matinee = 78.00; //INDEX: 2
//Theatre_Evening = 165.00; //INDEX: 3
double getTicketPrice(int index) {
  switch (index)
  {
  case 0:
    return Music_Mantinee;
    break;
  case 1: 
    return Music_Evening;
    break;
  case 2:
    return Theatre_Matinee;
    break;
  case 3:
    return Theatre_Evening;
    break;
  default:
    return 0; //ERROR
    break;
  }
}

//STD_Matinee = 15.00; //INDEX: 0
//VIP_Matinee = 25.00; //INDEX: 1
//STD_Evening = 20.00; //INDEX: 2
//VIP_Evening = 30.00; //INDEX: 3
double getValetPrice(int index) {
  switch (index)
  {
  case 0:
    return STD_Matinee;
    break;
  case 1:
    return VIP_Matinee;
    break;
  case 2:
    return STD_Evening;
    break;
  case 3:
    return VIP_Evening;
  default:
    return 0; //ERROR
    break;
  }
}