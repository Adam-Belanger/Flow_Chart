#ifndef CHARGES_H
#define CHARGES_H

#pragma once
//NAME: Devin Slauenwhite
//DATE: Nov 30, 2017

//DESC: Vars for flowchart

//Discounts
extern const double TwoSpecial;
extern const double ThreeSpecial;
extern const double FourSpecial;
extern const double FiveSpecial;

double getDiscount(int numOfPeople);

//Ticket Pricing
extern const double Music_Mantinee; //INDEX: 0
extern const double Music_Evening; //INDEX: 1
extern const double Theatre_Matinee; //INDEX: 2
extern const double Theatre_Evening; //INDEX: 3

//Music_Mantinee = 88.00; //INDEX: 0
//Music_Evening = 175.00; //INDEX: 1
//Theatre_Matinee = 78.00; //INDEX: 2
//Theatre_Evening = 165.00; //INDEX: 3
double getTicketPrice(int index);

//Admit Pricing
extern const double Child;//INDEX: 0
extern const double Adult;//INDEX: 1
extern const double Senior; //INDEX: 2

//Child = 0.50; //INDEX: 0
//Adult = 5.50; //INDEX: 1
//Senior = 1.25; //INDEX: 2
double getAdmitPrice(int index);

//Valet Pricing
extern const double STD_Matinee; //INDEX: 0
extern const double VIP_Matinee; //INDEX: 1
extern const double STD_Evening; //INDEX: 2
extern const double VIP_Evening; //INDEX: 3


//STD_Matinee = 15.00; //INDEX: 0
//VIP_Matinee = 25.00; //INDEX: 1
//STD_Evening = 20.00; //INDEX: 2
//VIP_Evening = 30.00; //INDEX: 3
double getValetPrice(int index);

struct Receipt {
  double Discounted;
  double SnacksDrinks;
  double Cover;
  double Tickets;
  double Valet;
  double Tip;
};
#endif
