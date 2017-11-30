//NAME: Devin Slauenwhite
//DATE: Nov 30, 2017

//DESC: Vars for flowchart

struct Receipt {
  double Discounted;
  double SnacksDrinks;
  double Cover;
  double Tickets;
  double Valt;
  double Tip;
};

 struct Discounts {
  const double TwoSpecial = 0.05;
  const double ThreeSpecial = 0.10;
  const double FourSpecial = 0.15;
  const double FiveSpecial = 0.20;
};

 struct TicketPricing {
   const double Music_Mantinee = 88.00;
   const double Music_Evening = 175.00;
   const double Theatre_Matinee = 78.00;
   const double Theatre_Evening = 165.00;
 };

 struct AdmitPricing {
   const double Child = 0.50;
   const double Adult = 5.50;
   const double Senior = 1.25;
 };

 struct ValetPricing {
   const double STD_Matinee = 15.00;
   const double VIP_Matinee = 25.00;
   const double STD_Evening = 20.00;
   const double VIP_Evening = 30.00;
 };

 struct SnackStand {
   const double Beverage_NONAlcohlic = 3.00;
   const double Beverage_Alcoholic = 7.75;
   const double Misc = 2.50;
 };
