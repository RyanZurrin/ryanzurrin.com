/*******************************************************************************
author:			Ryan Zurrin
program:		primes.cpp
date: 			11/12/19
assignment:	p.379 #22 'isPrime Function'	
purpose:    tells the user if the number they enered is prime or not
*******************************************************************************/

#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int isPrime(int &num);
void getNum(int &num);
int main()
{
	char rerun;
	
	do{
		int num;
		
		getNum(num);	
	  isPrime(num);
		cout << "Would you like to enter another number to check?\n"
				 << "(Y/y)will rerun program: ";
		cin >> rerun;	
	}while((rerun == 'Y' || rerun == 'y'));
	return 0;
}
/*******************************************************************************
																FUNCTIONS																								
*******************************************************************************/
int isPrime(int &num)
{
	int divideBy = 2;
	int count;
  
  for( count = 2; count <= (num / 2); count++)
  { 	
  	if (num % count == 0)
  		 {
  		 	divideBy++;  		 
			 }			 			 
	}
	if(divideBy == 2)
	{
		cout << endl << num << " is a prime number\n\n";		
	}
	else
	{
		cout << endl << num << " is not a prime number\n\n";
	}
	return 0;

}
////////////////////////////////////////////////////////////////////////////////
void getNum(int &num)
{
	//int _num;
  cout << "\nEnter a positive number greater than 1\n"
			 << "and I will check if it is prime or not.\n>";
	cin >> num;
	while(num <= 1 || !cin)
	{
		cin.clear();
		cin.ignore(100,'\n');
		cout << "Only Positive numbers above 1 will be calculated. Try Again!\n>";	
		cin >> num;
	}	
}
///////////////////////////////////////////////////////////////////////////////

 













