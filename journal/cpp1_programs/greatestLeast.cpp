/*****************************************************************************
author:			Ryan Zurrin
program:		greatestLeast.cpp
date: 			10/18/19
assignment:	#13 page299 'The Greatest and Least of These'
purpose:    Allows the user to enter a series of numbers and returns the
						minimum and maximum of that series.  *(-99 = escape sequence)
*****************************************************************************/

#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	char rerun;
	int long number, max, min;	
	
	do{	
		min = 999999999;
		max = -999999999;
		number=0;
		system("cls");
			cout << "This Program Will remember the largest and smallest number\n"
					 << "that you enter. Decimals are dropped. To exit enter -99.\n"
					 << "----------------------------------------------------------\n";
			
			while(number != -99)
			{									
				cout << "\nEnter a number(-99, exits).\n>";
				cin >> number;
					while (!cin)
					{
						cin.clear();
						cin.ignore(100,'\n');
						cout << "Please Enter A  Number to continue.\n>";
						cin >> number;
					}
				if (max <= number)
					max = number;
				if (min >= number && number != -99)
					min = number;		
			}
			cout << "----------------------------------------------------------\n";
			cout << setw(30) << left <<"\nYour largest number was: " << max << endl;
			cout << setw(30)<< left <<"\nYour Smallest number was: " << min << endl;
			cout << "\nwould you like to calculate another distance(Y/n)?";
			cin >> rerun;		
		}while((rerun == 'Y' || rerun == 'y'));
	return 0;
}
