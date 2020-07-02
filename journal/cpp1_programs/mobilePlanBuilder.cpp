/*****************************************************************************
author:			Ryan Zurrin
program:    mobilePlanBuilder.cpp  
date: 			10/6/19
assignment:	page#228 program 25 & 26 Mobile Service Provider
purpose:    calculates the cost of different data plans for the customer.   
*****************************************************************************/

#include <iostream>
#include <iomanip>


using namespace std;

const int INCLDATA_A = 4, 
					INCLDATA_B = 8;

const double PACKAGE_A = 39.99,
             PACKAGE_B = 59.99,
             PACKAGE_C = 69.99;

int main()
{   
    char choice;
    int  data;
    double rate, total, totalData, saved, saved2, savedTotal, savedTotal2;

    cout << setprecision(2) << showpoint << fixed;

    start: 
    system("cls"); 
   
        cout << "\n\t     Mobile Service Plan Bill Calculator\n"
             << "\tPick your service plan from the choices below\n\n"
             << "(A/a). Package A, $39.99 per/month + 4 gigabytes included.\n"
             << "(B/b). Package B, $59.99 per/month + 8 gigabytes included.\n"
             << "(C/c). Package C, $69.99 per/month + Unlimited Data.\n"             
             << " \nEnter your plan letter to begin calculating bill.\n>";
        cin  >> choice;

    switch (choice)
      {
        case 'A':
        case 'a':        					
				    cout << "\nYou choose Package A which is $ " << PACKAGE_A 
                 << " monthly" <<endl
                 << "Your plan includes 4 gigabytes of data and is $10 for"
                 << "\neach additional gigabyte used over that initial\n"
								 << "4 gigabytes.\n"
                 << "\nHow many gigabytes were used this month?\n>";
            cin >> data;
            while ( !cin || data < 0)
            	{
            		cin.clear();
								cin.ignore(100,'\n');
            		cout << "data amount needs to be a positive number\n"
            				 << "Please reenter a valid amount below\n>";
            		cin >> data;
							}						
								
		            totalData = (data - INCLDATA_A)*10;
		            if (totalData < 0)
								{
		            	totalData = 0;
								}          
		            total = (PACKAGE_A + totalData);
		            saved = ((data - INCLDATA_B)*5)+PACKAGE_B;								
								if (saved < 59.99)
								{
									saved = 59.99;
								}
								saved2 = total - PACKAGE_C;
								if (saved2 < 69.99)
								{
									saved2 = 69.99;
								}
								savedTotal = total - saved;		  
								savedTotal2 = total - saved2;         	
		           
            		cout<< setw(13) << left <<"\nData cost: "
									  <<  setw(6)<< right << "$" << totalData <<endl
									  << setw(13) << left <<"\nPlan cost: "
									  <<  setw(6)<< right << "$" << PACKAGE_A <<endl
									  << "\n------------------------------------------\n"
                		<< setw(11) << left <<"Total Bill: " 
										<<  setw(6) << right << "$" << total << endl
										<< "\n------------------------------------------\n"
										<< setw(11) << left <<"Package B?: " 
										<<  setw(6) << right << "$" << saved << endl
										<< setw(11) << left << "Package C?: "
										<< setw(6) << right << "$" << PACKAGE_C << endl;
										
								if((savedTotal < 1) && (savedTotal2 < 1))
									{
										cout << "\nYou are using the best plan for your usage!\n";
									}

								if (savedTotal > 1)
									{
									cout << "\nYou could save  $" << savedTotal
											 << " on this same bill\n"
											 << "by switching to cellular Package B.\n";	
									}
								if (savedTotal2 > 1)
									{
										cout << "\nYou could save  $" << saved2
												 << " on this same bill\n"
												 << "by switching to cellular Package C.\n";
									}

									break;
        case 'B':
        case 'b':
            cout << "\nYou choose Package B which is $ " << PACKAGE_B 
                 << " monthly" <<endl
                 << "Your plan includes 8 gigabytes of data and is $5 for"
                 << "\neach additional gigabyte used over that initial\n"
								 << "8 gigabytes.\n"
                 << "\nHow many gigabytes were used this month?\n>";
            cin >> data;
            while ( !cin || data < 0)
            	{
            		cin.clear();
            		cin.ignore(100, '\n');
            		cout << "data amount needs to be a positive number\n"
            				 << "Please reenter a valid amount below\n>";
            		cin >> data;
							}								
		            totalData = (data - INCLDATA_B)*5;
		            if (totalData < 0)
							{
		            			totalData = 0;
							}			            
		            total = (PACKAGE_B + totalData);	
								saved = PACKAGE_C;
								
		            savedTotal = total - saved;	            

            		cout<< setw(13) << left <<"\nData cost: "
									  <<  setw(6)<< right << "$" << totalData <<endl
									  << setw(13) << left <<"\nPlan cost: "
									  <<  setw(6)<< right << "$" << PACKAGE_B <<endl
									  << "\n------------------------------------------\n"
                		<< setw(11) << left <<"Total Bill: " 
										<<  setw(6) << right << "$" << total << endl 
										<< "\n------------------------------------------\n"
										<< setw(11) << left <<"Package C?: " 
										<<  setw(6) << right << "$" << saved << endl;
										
								if(savedTotal < 1) 
									{
										cout << "\nYou are using the best plan for your usage!\n";
									}										
										
								if(savedTotal > 1)
									{
										cout<< "\nYou could save  $" << savedTotal
									 		<< " on this same bill\n"
									 		<< "by switching to cellular Package C.\n";	
									}										      			 
            break;
        case 'C':
        case 'c':
            cout << "\nYou choose Package C which is $ " << PACKAGE_C 
                 << " monthly" <<endl
                 << "Your plan includes Unlimited data.\n";                 
            
            		cout << setw(11) << left <<"\nTotal Bill: " << right
									   << "$" << setw(10) << left << PACKAGE_C << endl;

            break;
            
            
                    
        default:
        {        
        		cout << "Enter a Valid Package Option A, B, or C.\n";
        				system("pause");
        		    goto start; // go to start            
        }
      }//switch closed
      do{
      	cout << "\nDo you want to calculate another phone bill y/n?\n>";
      	cin >> choice;
      	
      	if((choice == 'Y') || (choice == 'y'))
      		{
      			goto start;
					}
					else if ((choice == 'N') || (choice == 'n'))
						{
							break;
						}     	
			}while(choice  != 'y' || choice != 'Y');

    return 0;
}
