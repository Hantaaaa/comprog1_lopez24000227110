#include <iostream>
using namespace std;

int main() 
{
 string visitorname; 
 string birthday;
 int month;
 int day;
 int year;
 float leapyear = year % 4;
   cout << "Hello I am Karl, Welcome to my First C++ Application";
   cout << ("\nCan I ask you what is your name? ");
   cin >> visitorname;
   cout << "Good Day " << visitorname << " It is nice to meet you";
   cout << ("\nWhen is your birthday? ");
   cout << "\nMonth: ";
   cin >> month;
   cout << "Day: ";
   cin >> day;
   cout << "Year: ";
   cin >> year;
   cout << leapyear;
    if (leapyear == 0)
    {
     cout << ("\nWow! You're a leap year");
    }
    else 
    {
     cout << ("\nYou're not a leap year");  
    }
 }    