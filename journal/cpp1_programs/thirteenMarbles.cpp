/*****************************************************************************
author:			Ryan Zurrin
program:		thirteenMarbles.cpp	
date: 			11/3/19
assignment:		
purpose:    
*****************************************************************************/
#include <iostream>

using namespace std;

//function prototypes'
void directons();
int computerPick(int &, int &humPick);
int humanPick(int &);
bool validPick(int &);

int main()
{
	char rerun;
	int marbles = 13;
	int comPick,humPick;
	
	
	directons();
	do{
		
		cout << "\nThere are " << marbles << " marbles left in the bag\n";
		cout << "I the MIGHTY COMPUTER have taken 1 marble(s) from the bag\n";
			marbles = marbles - 1;
			
		do{
			humanPick(marbles);
			computerPick(marbles, humPick);	
			
					
			
		}while(marbles > 0);
		cout << marbles << " marbles are left in the bag\n";
		cout << "\nI the MIGHTY COMPUTER have WON the game again, bwaahaha!\n";
		cout << "\nWould you like to try again(Y/n)?\n>";
		marbles = 13;
		
		cin >> rerun;
		
	}while(rerun == 'Y' || rerun == 'y'); // allow game to rerun
	return 0;
	
}
/*****************************************************************************
		Game Functions begin
*****************************************************************************/
int computerPick(int &marbles, int &humPick)
{
	int comPick;
		
	if (marbles == 11)
		comPick = 3;
		else if(marbles == 10)
			comPick = 2;
			else if(marbles == 9)
				comPick = 1;
				else if(marbles == 7)
					comPick = 3;
					else if(marbles == 6)
						comPick = 2;
						else if(marbles == 5)
							comPick = 1;
							else if(marbles == 3)
								comPick = 3;
								else if(marbles == 2)
									comPick = 2;
									else if(marbles == 1)
										comPick = 1;
	
	marbles = marbles - comPick;
	cout << "\nI the MIGHTY COMPUTER have chosen " << comPick << " marble(s)\n";  		

}
//////////////////////////////////////////////////////////////////////////////
int humanPick(int &marbles)
{
	
	int humPick;
	cout << "\nThere are now " << marbles << " marbles left in bag\n"
		 << "How many would you like to take (1 - 3)?: \n";   
	cin >> humPick; 
	validPick(humPick);	
	marbles = marbles - humPick;	
	cout << endl << "\nYou choose "<< humPick << " marble(s)"<< endl
		 << "There are now "<< marbles <<  " marbles in the bag\n";
	
	
}
///////////////////////////////////////////////////////////////////////////////
bool validPick(int &humPick)
{
	while (!cin || humPick > 3 || humPick < 1)
	{
		cin.clear();
		cin.ignore(100,'\n');
		cout << "Please pick between 1 and 3 marbles to remove from bag: ";
		cin >> humPick;
	}	
}
///////////////////////////////////////////////////////////////////////////////
void directons()
{
	cout << "You have choosen to play 13 marbles with me the MIGHTY COMPUTER.\n"	
		 << "The object of the game is to take 1, 2, or 3 marbles" 
		 <<" from the bag on your turn.\n"
		 << "The player that removes the last marble or marbles" 
		 << " from the bag wins the game.\n"
		 << "One last thing, being the MIGHTY COMPUTER, I always go first.\n"
		 << "Good Luck... you will need it. I never Lose!\n";			
}
/////////////////////////////////////////////////////////////////////////////















