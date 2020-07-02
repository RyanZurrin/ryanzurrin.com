/*******************************************************************************
author:			Ryan Zurrin
program:		averageScore.cpp	
date: 			11/9/19
assignment:		pg.375 #11 'Lowest Score Drop"
purpose:   		averages the test scores for a group of five scores dropping the
				lowest of the scores.
*******************************************************************************/
#include <iostream> 
#include <iomanip>
using namespace std;

int getScore(int&);
int findLowest(int& test1, int& test2, int& test3, int& test4, 
														int& test5, int& drop);
void calcAverage(int &average, int &test1,
			        int &test2, int &test3, int &test4, int &test5, int& drop);

int main()
{
	  
	 int sum = 0;
	 int average = 0;
	 int score = 0;	
	 char rerun; 	 
do{	 
  int test1=0, test2=0, test3=0, test4=0, test5=0, worst=101;
	cout<< "This Program will average 5 test scores\n"
	    << "dropping the lowest score\n";
	
	
	 test1 = getScore(score);
	 test2 = getScore(score);
	 test3 = getScore(score);
	 test4 = getScore(score);
	 test5 = getScore(score);
	calcAverage(test1, test2, test3, test4, test5, average, worst);
	
	cout << "Do you want to find another average?\n(Y/y)will rerun program: ";
	cin >> rerun;	
	}while((rerun == 'Y' || rerun == 'y'));
	return 0;
}
/*******************************************************************************
					Functions and program logic																														
*******************************************************************************/
int getScore(int& )
{
	int score;
	cout << "\nEnter a test score: " << endl;
	cin >> score;
	while (!cin || score < 0 || score > 100)
	{
		cin.clear();
		cin.ignore(100,'\n');
		cout << "\nEnter a valid test score(0-100): ";
		cin >> score;
		
	}
	return score;
}

////////////////////////////////////////////////////////////////////////////////
void calcAverage( int &test1, int &test2, int &test3, int &test4,
									 int &test5, int &average, int& _drop)
{	
	int  sumMinus, sumAll;
	int drop = _drop;
	int averageAll;	
	averageAll = (test1+test2+test3+test4+test5)/5;
	sumAll = test1 + test2 + test3 + test4 + test5;
	findLowest(test1, test2, test3, test4, test5, _drop);
	sumMinus = test1 + test2 + test3 + test4 + test5 - _drop;
	
	average = sumMinus/4;
	
	cout<<setw(45)<< left <<"\n\nThe total of your 5 grades is: "<< sumAll
		<<"/5"
	    <<setw(45)<< left << "\n\nMaking your gross average: "<<averageAll 
		<< "%"
		<<setw(45)<< left << "\n\nThe worst grade to be dropped is:" << _drop 
		<<setw(45)<< left << "\n\nThe new total to average is:"<<sumMinus 
		<<"/4" 
		<<setw(45)<< left << "\n\nThe net average is now: " 
		<< average << "%\n\n" << endl;	     	    
}
////////////////////////////////////////////////////////////////////////////////
int findLowest(int& test1, int& test2, int& test3, int& test4,
													 int& test5, int& _drop)
{
	int drop = 101;
	if (_drop > test1)
	 _drop = test1;	
  if (_drop > test2)
   _drop = test2;
   if (_drop > test3)
	 _drop = test3;	
  if (_drop > test4)
   _drop = test4;
   if (_drop > test5)
	 _drop = test5;	
	 return _drop;
}
////////////////////////////////////////////////////////////////////////////////

