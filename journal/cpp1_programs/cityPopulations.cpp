/*******************************************************************************
author:			Ryan Zurrin
program:		cityPopulation.cpp
date: 			10/28/2019
assignment:		page#300 program 18 'Population Bar Chart'	
purpose:    	to display a simple population bar chart of prairievile's population
				growth over time.
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	ifstream populationFile;
	char dataFile[100] = {0};		
	char city[100] = {0};	
	int pop, bar, intrvl, year = 1900;
	
	cout << "This program reads population data from a file\nand turns it"
			 << " into a simple 'star' bar-chart\n";
	
	cout << "\nEnter the data file you want to open.\n>";
	cin.getline(dataFile,100);
	populationFile.open(dataFile);
	
	cout << "\nEnter the name of the city this data correlates too.\n>";
	cin.getline(city,100);
 
  cout << "\nEnter how many years between data-sets.\n>";
  cin >> intrvl;
  while( !cin || intrvl < 1)
  {  	
  	cin.clear();
		cin.ignore(100,'\n');
		cout << "Please enter a positive interger.\n>";
		cin >> intrvl;
	}
	
	if (populationFile)	
	{
			cout << endl << city << " Population Growth" <<endl
		 			 << "(each * = 1,000 people)\n\n";
			while(populationFile >> pop)
			{
				bar = round((pop+500)/1000);
				int x = 0;
				cout<< setw(7) << left << year ;
				 year += intrvl;
				for (x = bar; x > 0; x--)
						cout << "*";
				cout << endl;		
			}
	}
	else
	{
		cout << "Error opening the file. \n";
	}
	populationFile.close();		
	return 0;
}
