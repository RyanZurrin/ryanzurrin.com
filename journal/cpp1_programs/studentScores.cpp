/*******************************************************************************
author:			Ryan Zurrin
program:		studentScores.cpp	
date: 			11/26/19
assignment:		CIS124 FA 2019 Program #9
purpose:    	reads test scores from a file and displays the number of student 
				scores that falls between certain ranges.
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int getFile(int rangeArr[]);
int rangeTester(int rangeArr[],ifstream& infile);

int main()
{
  const int RANGES = 8;  
  char rerun;
	 
  do{	
 		int rangeArr[RANGES]={0};  		
 		getFile(rangeArr);				
 		
		cout << "\nWould you like to process another file?\n(Y/y) will rerun"
				 << " everything else closes program\n>";
	  	cin >> rerun;		  
			 
  }while((rerun == 'Y' || rerun == 'y'));
  
  return 0;
}
////////////////////////////////////////////////////////////////////////////////
int getFile(int rangeArr[])
{
  ifstream infile;
  string file;  
	cout << "This software will input a file filled with numbers from 0 - 200.\n"
		 << "It will return to the user the number of occurences that numbers\n"
		 << "appear within 25 place intervals(0 - 24, 25 - 49, etc...)\n\n";			
  	cout << "\nEnter the name of the file you want to open\n>";
  	cin >> file;
  	infile.open(file.c_str());
  while (!infile)
  {
    cin.clear();
    cin.ignore(100, '\n');
    cout << "file you entered was not valid, try again.\n>";
    cin >> file;
    infile.open(file.c_str());
  }
  if (infile)
  {
    rangeTester(rangeArr, infile);
  }
  
}
////////////////////////////////////////////////////////////////////////////////
int rangeTester(int rangeArr[],ifstream& infile)
{
  int scores = 0;

  while (infile >> scores)
    {
      if(scores >= 0 && scores <= 24)
        rangeArr[0]++;
      else if(scores >= 25 && scores <= 49)
        rangeArr[1]++;
      else if(scores >= 50 && scores <= 74)
        rangeArr[2]++;
      else if(scores >= 75 && scores <= 99)
        rangeArr[3]++;
      else if(scores >= 100 && scores <= 124)
        rangeArr[4]++;
      else if(scores >= 125 && scores <= 149)
        rangeArr[5]++;
      else if(scores >= 150 && scores <=174)
        rangeArr[6]++;
      else if(scores >= 175 && scores <= 200)
        rangeArr[7]++;      
    }
    
	 	cout << "\n    Score:" << "   " << "Qty:\n";
	 	cout << "   --------" << "  " << "----\n";
    for(int range = 0, x = 0, y = 24; range <= 7; x+=25, y+=25, range++)
      {     																																
	 		if(y == 199)
	 				 y = 200;
      cout << setw(5) << right << x 
					 << setw(3) << left <<" -"
					 << setw(4) << left<< y << left <<"="
					 << " " << rangeArr[range] << endl;

					 infile.close();
      }
      return scores;
}
////////////////////////////////////////////////////////////////////////////////

