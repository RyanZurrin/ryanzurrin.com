/*****************************************************************************
author:			Ryan Zurrin
program:		magicDay.cpp
date: 			9/27/19	
assignment:	Magic Dates pg. 222
purpose:   	asks the user to enter a date and if the month multiplied by the day
						is equal to the year then the date is a magical date.
*****************************************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int month, day, year;

    cout << "Is your Birthdate Magical?\n"        
         << "Enter a month from 1-12, a day from 1-31, and a 2 digit year\n"
         << "each separated by a space. Example: 7 22 81 , then hit ENTER\n";
    cin  >> month >> day >> year;

    if (month < 13 && day < 32)
    {
      if (month*day == year)    
          cout << "This is a magical date!!! You should play a lottery ticket!";    
      else     
	       cout << "This is not a magical date, sorry.";
    }
    else
    {
      cout <<"ERROR: Restart and Enter a valid Date\n";             
    }
  getch();  
	return 0;
}
