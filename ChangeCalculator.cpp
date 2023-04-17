/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//this program will get the change amount with an inputted dollar amount

int main()
{

//declaring the variables of each type of coin and the change

    double pennies, dollars, nickels, dimes, quarters, change, coins;
 
//assigning the values to the type of coin
 
    pennies = 1;
    nickels = 5;
    dimes = 10;
    quarters = 25;
    dollars = 100;
    
//asking the user to input a value for change
    
    cout << "Enter the change amount to make in dollars: " << endl;
    cin >> change;
    
    coins = round(change * 100);
    
//calculating the amount of coins for each type of coin
    
    int dollarChange = coins/dollars;
    int quarterChange = (coins - (dollarChange * dollars))/(quarters);
    int dimeChange = (coins - (dollarChange * dollars) - (quarterChange * quarters))/(dimes);
    int nickelChange = (coins - (dollarChange * dollars) - (quarterChange * quarters) - (dimeChange * dimes))/(nickels);
    int pennyChange = (coins - (dollarChange * dollars) - (quarterChange * quarters) - (dimeChange * dimes) - (nickelChange * nickels))/(pennies);
    
//returning to console the amount of dollars and coins that make up the inputted change
    
    cout << "Change Due: " << endl;
    
    cout << "\n" << "\t" << dollarChange << " dollars" << endl;
    cout << "\t" << quarterChange << " quarters" << endl;
    cout << "\t" << dimeChange << " dimes" << endl;
    cout << "\t" << nickelChange << " nickels" << endl;
    cout << "\t" << pennyChange << " pennies" << endl;
 
 
   
    return 0;


}





