// Name: Carlos Huizar, Israel Andrade, Thalia Villalobos, Diego Medina
// Date: 9 Oct 2015 
// 
#include<iostream>
#include<string>
#include<cassert>
using namespace std;

char menu();
double climbing();
double scuba();
double skyDive();
double spelunk();
double diegoDiscount();

int main()
{
     
}
char menu()
{



}
double climbing()
{




}
double scuba()
{




}
double skyDive()
{




}
double spelunk()
{
    int numberPeople;
    int equipmentRental;
    int baseCharge;
    int rentalDays;
    double total;
    double subtotal;
    double finalTotal;
    
    cout << "Please input the number of people that are in your party: " << endl;
    cin >> numberPeople;
    
    cout << "Please input the number of days your party will rent the equipment: " << endl;
    cin >> rentalDays;
    
    equipmentRental = numberPeople  * 40 * rentalDays;
    
    baseCharge = numberPeople * 700;
   
    if (numberPeople >= 5)
    {
        subtotal = baseCharge * diegoDiscount();
        total = baseCharge - subtotal;
        finalTotal = equipmentRental + total;
        
        return finalTotal;
    } 
    else
    {
        total = baseCharge + equipmentRental;
        return total;
    }
}
double diegoDiscount()
{
    double discount = .10;
    
    return discount;
}
