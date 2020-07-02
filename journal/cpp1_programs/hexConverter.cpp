/*******************************************************************************
author:			Ryan Zurrin
program:		hexConverter.cpp
date: 			11/30/19
assignment:	chapter 7 assignment #2
purpose:    Converts Hex to Integer or Interger to Hex, menu based
*******************************************************************************/
#include <iomanip>
#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void toupper(string& s);
void validateMenuChoice(int& choice);
bool validateHex(string& hexer);
void validateInt(long long int& bT);
void menu();
int menuOne();
int menuTwo();

int main()
{
	int choice;

	do
	{
		menu();
		cin >> choice;
		validateMenuChoice(choice);

	}while(choice != 3);

	return 0;
}
/*******************************************************************************
																FUNCTIONS
*******************************************************************************/
void menu()
{
	cout << "\nInteger to Hex, or Hex to Integer\n\tNumber Converter\n";
	cout << "-----------------------------------------\n";
	cout << "\n1) Convert a Hexadecimal to a Integer\n" << endl;
	cout << "2) Convert an Integer to a Hexadecimal\n" << endl;
	cout << "3) Exit Program\n" << endl;
	cout << "-----------------------------------------\n" << endl;
	cout << "Enter your choice: ";
}
////////////////////////////////////////////////////////////////////////////////
int menuOne()
{
	string hexarray;
	int count = 0;
	
	cout << "\nEnter a Hexadecimal to convert to an Integer\n>";
	cin >> hexarray;
	validateHex(hexarray);

}
////////////////////////////////////////////////////////////////////////////////
int menuTwo()
{
	long long int bT;  //baseTen
	string hexDisplay = "";
	stringstream converter;
		cout << "\n   Enter an Integer to convert to a Hexadecimal\n";
	cout << "Any non-integer typed after a valid integer will be lost\n>";
	cin >> bT;
	validateInt(bT);
	converter << hex << bT;
	hexDisplay = converter.str();
	cout << "\n-------------------------------------------------------------";
	cout << setw(13) << left <<"\n The Integer: "
			 << setw(15) << left << bT
			 << setw(12) << left << "| in Hex is: "
			 << setw(2) << left << "0x";
  toupper(hexDisplay);

  cout << "\n-------------------------------------------------------------\n";

  cout << endl << "Press <Enter> to continue...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();

}
////////////////////////////////////////////////////////////////////////////////
bool validateHex(string &hexer)
{
	bool flag = 0;
	long long int makeint;
	stringstream converter;
	int length = hexer.length();
	  for(int i=0; i<length; i++)
    {
      if (!isxdigit(hexer[i]))
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
    	cout << endl;
    	toupper(hexer);
      cout << " is not a valid hexadecimal number"
					 << "\nUse 0 - 9 and A/a - F/f only\n";
      menuOne();

    }
    else
    {

    	cout << "\n-------------------------------------------------------------";
    	cout << setw(10) << left << "\n The hex: 0x";
    	toupper(hexer);
    	cout << setw(22)<< right << "| as an integer is: ";
    	converter << hex << hexer;
    	converter >> makeint;
    	cout << setw(20)<< left << static_cast<long long int>(makeint);
			cout << "\n--------------------------------------------------------"
					 << "-----\n";
			cout << endl << "Press <Enter> to continue...";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.get();
    }
}
////////////////////////////////////////////////////////////////////////////////
void validateMenuChoice(int& choice)
{

		while(!cin || choice > 3 || choice < 1)
		{
			cin.clear();
	    cin.ignore(100, '\n');
	    cout << "\nEnter a valid menu choice:\n1) Hex to Int\n"
			     << "2) Int to Hex\n3) to quit\n> ";
	    cin >> choice;
  	}

    if(choice == 3)
    	cout << "\n  Thank You and\n    Good Bye!" << endl;
			else if(choice == 2)		    
				menuTwo();
				else if(choice == 1)			    
					menuOne();
	}
////////////////////////////////////////////////////////////////////////////////
void validateInt(long long int& bT)
{
	while(!cin || bT < 0)
	{
		cin.clear();
  	cin.ignore(100, '\n');
		cout << "\nEnter a Valid Positive Integer value\n>";
		cin >> bT;
	}
}
////////////////////////////////////////////////////////////////////////////////
void toupper(string& convert)
{
 		int length = convert.length();

    for (int hJumper = 0; hJumper < length; hJumper++)
    {
    	if(convert[hJumper] >= 'a' && convert[hJumper] <= 'f')
    	{
    		printf("%c", convert[hJumper] - 32); // "%c" is telling it to  print
			}									 										 //  characters to screen -32 is
			else								  								 // the defference between upper
			{																			 // and lower case ascii characters
				printf("%c", convert[hJumper]);
			}

		}
	}
////////////////////////////////////////////////////////////////////////////////

















