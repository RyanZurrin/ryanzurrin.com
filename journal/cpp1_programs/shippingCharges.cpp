/*****************************************************************************
author:			Ryan Zurrin
program:    shippingCharges.cpp 
date: 			10/4/2019
assignment:	page#225 program 15 'Shipping Charges"
purpose:    This program asks the user for the weight of a package to be 
        		delivered and how far it needs to be shipped as well and then
            calculates the total shipping cost.
*****************************************************************************/

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	
	int miles;
	double weight, rate;
	char rerun;
	
	
	do{
		do{
			start:
				cout << setprecision(2) << fixed << showpoint			 
						 << "----------------------------------\n"
						 << "|  Fast Freight Shipping Company |\n"
						 << "----------------------------------\n"			
						 << "   Calculate Your Shipping Cost\n\n"	 
						 << "\n1 kg = 2 lbs 3 oz.\n"
						 << "\nMaximum shipping weight: 20 kg.\n"
						 << "\nWhat is the weight of your package\nin Kilograms?\n\n>";			
					
				cin >> weight;	
				    while( !cin || weight <= 0 || weight >= 21)
				    {
				    	cout << "------------------------------------------------\n"
						 	   	 << "|  You must enter a weight between 1 and 20 kg |\n"
						 	   	 << "------------------------------------------------\n>";							
						cin.clear();
						cin.ignore(100,'\n');						
						goto start;
						}    			
		
				if ((weight >= 11) && (weight <= 20))
						rate = 4.80;
						else 
						if ((weight >= 7) && (weight <= 10))
								rate = 3.70;
								else
								if ((weight >= 2) && (weight <= 6))
										rate = 2.20;
										else 
										if ((weight >= .1) && (weight <= 2))
											rate = 1.10;								
				 
			} while ((weight <= 0) || (weight >= 21));	
		
			do{	
				second:	
				cout <<	"_______________________________________________\n"
						 << "\nHow many miles are you shipping this package?\n"
					   << "\n1.61 km = 1 mi\n"
					   << "10 mile minimum and 3000 mile maximum.\n\n"
					   << "Insert distance in miles and then press enter\n\n> ";
				cin >> miles;
				while( !cin || (miles < 10) || (miles > 3000) )
				    {
				    	cout << "-------------------------------------------\n"
						 	 		 << "|  We only ship between 10 and 3000 miles |\n"
						 		   << "-------------------------------------------\n"								 
						 	     << "Please re-enter a valid shipping distance\n>";						
						cin.clear();
						cin.ignore(100,'\n');						
						goto second;
						}	
						
				if ((miles >= 10) && (miles <= 500))
						rate *= 1;
						else 
						if ((miles >= 501) && (miles <= 1000))
							rate *= 2;
							else 
							if ((miles >= 1001) && (miles <= 1500))
								rate *= 3;
								else 
								if ((miles >= 1501) && (miles <= 2000))
									rate *= 4;
									else 
									if ((miles >= 2001) && (miles <= 2500))
										rate *= 5;
										else 
										if ((miles >= 2501) && (miles <= 3000))
											rate *= 6;						
			}while ((miles < 10) || (miles > 3000));
			
			cout <<"____________________________________________\n"
					 << "\n     Shipping Cost\n\n"
					 <<setprecision(1)
					 << setw(15) << left << "Total Weight: " 
					 << setw(10) << right << weight << " kg.\n"
					 << setw(10) << left << "Total Distance: " 
					 << setw(9) << right << miles << " miles.\n"
					 << "------------------------------------------\n"
					 << setw(11) << left << "Total Cost: " 					 
					 <<setprecision(2) << setw(11) << right << "$" << rate << endl				 
					 <<	"\nThank You for using The Freight Shipping Co.\n"
					 << "\n       Have a Great Day!\n";
					 					 
		 do{
      cout <<"\nWould you like to calculate another shipping cost?\n(Y/N)\n>";
      	cin >> rerun;
      	
      	if((rerun == 'Y') || (rerun == 'y'))
      		{
      			goto start;
					}
					else if ((rerun == 'N') || (rerun == 'n'))
						{
							break;
						}     	
			}while(rerun  != 'y' || rerun != 'Y');		
			
	}while((rerun == 'Y' || rerun == 'y'));

	return 0;
}
	
