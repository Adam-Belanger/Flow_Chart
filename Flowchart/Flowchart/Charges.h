//NAME: Devin Slauenwhite
//DATE: Nov 30, 2017

//DESC: Vars for flowchart

//Discounts
const double TwoSpecial = 0.05;
const double ThreeSpecial = 0.10;
const double FourSpecial = 0.15;
const double FiveSpecial = 0.20;

double getDiscount(int numOfPeople);

//Ticket Pricing
const double Music_Mantinee = 88.00; //INDEX: 0
const double Music_Evening = 175.00; //INDEX: 1
const double Theatre_Matinee = 78.00; //INDEX: 2
const double Theatre_Evening = 165.00; //INDEX: 3

//Music_Mantinee = 88.00; //INDEX: 0
//Music_Evening = 175.00; //INDEX: 1
//Theatre_Matinee = 78.00; //INDEX: 2
//Theatre_Evening = 165.00; //INDEX: 3
double getTicketPrice(int index);

//Admit Pricing
const double Child = 0.50; //INDEX: 0
const double Adult = 5.50; //INDEX: 1
const double Senior = 1.25; //INDEX: 2

//Child = 0.50; //INDEX: 0
//Adult = 5.50; //INDEX: 1
//Senior = 1.25; //INDEX: 2
double getAdmitPrice(int index);

//Valet Pricing
const double STD_Matinee = 15.00; //INDEX: 0
const double VIP_Matinee = 25.00; //INDEX: 1
const double STD_Evening = 20.00; //INDEX: 2
const double VIP_Evening = 30.00; //INDEX: 3


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
