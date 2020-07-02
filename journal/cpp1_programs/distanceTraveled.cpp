/*****************************************************************************
author:			Ryan Zurrin
program:		distanceTraveled.cpp
date: 			10/18/19
assignment:	#6 page298 'Distance Traveled'
purpose:    Calculates the distance a user has traveled relative to the speed 
						and time they input.
*****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	 	
	char rerun;
	double speed, time, distance, timeTotals, mileTotals;
	
	do{
			system("cls");
			timeTotals = 1;
			mileTotals = 0;
			cout << "\n-------------------------------------\n";
			cout << "|   This is a distance calculator   |\n";
			cout << "-------------------------------------\n";
			cout << "\nWhat was your speed in mph?\n>";	
			cin >> speed;
			while( !cin || speed < 0)
			{
				cin.clear();
				cin.ignore(100,'\n');
				cout << "Please enter a valid speed above 0 mph.\n>";
				cin >> speed;		
			}
				cout << "How long were you traveling in hours?\n>"	;	
			cin >> time;
			while( !cin || time < 1)
			{
				cin.clear();
				cin.ignore(100,'\n');
				cout << "Please enter a minimum of 1 hour.\n>";
				cin >> time;		
			}	
			distance = speed * time;
			cout << "\nHour" << "\t" << "   Distance Traveled" << endl;
			cout << "----------------------------------------------" << endl;
			while(timeTotals <= time)
			{
				mileTotals = timeTotals * speed;				
				cout << " " << setw(15) << left << timeTotals << left << mileTotals 
						 << endl;		 
				timeTotals++;		
			}	
			cout << "\nYour total distance traveled for " << time << " hours is:\n> "
				   << distance << " miles" << endl;
			
			cout << "\nwould you like to calculate another distance(Y/n)?";
			cin >> rerun;
				   
	}while((rerun == 'Y' || rerun == 'y'));
				   
	return 0;
}
