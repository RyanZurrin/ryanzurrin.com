/*******************************************************************************
author:			Ryan Zurrin
program:		randomArrayFiller	
date: 			12/9/19
assignment:	Sort and Search
purpose:    fills an array size 50 with random numbers and displays the number
						frequency of the weighted digits between 1 and 20.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void load_array(int array[]);
void display_array(const int array[], int size);
void sort_array(int array[], int size);
void display_frequency(int array[], int array2[]);

const int MIN_VAL = 1;
const int MAX_VAL = 20;
const int SIZE = 50;
const int RANGE = 20;

int frequency_list[RANGE] = {0};
int number_list[SIZE] = {0};
int display_list[RANGE]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};





int main()
{		
		load_array(number_list);
		display_array(number_list, SIZE);
		sort_array(number_list, SIZE);
		display_array(number_list, SIZE);
		display_frequency(frequency_list, number_list);	

	return 0; 
}
/*******************************************************************************
																FUNCTIONS																								
*******************************************************************************/
void load_array(int array[])
{
	
	unsigned seed = time(0);
	srand(seed);
	int randVal;	
	for(int i=0; i<SIZE; i++)
	{ 
        array[i] = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL; 
        //cout << number_list[i] << endl;
	}		
}
////////////////////////////////////////////////////////////////////////////////
void sort_array(int array[], int size)
{
	int minDex, minVal;

	for (int start = 0; start < (size -1); start++)
	{
		minDex = start;
		minVal = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if(array[index] > minVal)
			{
				minVal = array[index];
				minDex = index;
			}
		}
		swap(array[minDex], array[start]);
		display_array(array,size);		
	}
	
}
////////////////////////////////////////////////////////////////////////////////
void display_array(const int array[], int size)
{
	for(int index = 0; index < size; index++)	
		cout << array[index] << " ";
	cout << endl;	
}
////////////////////////////////////////////////////////////////////////////////
void display_frequency(int array[], int array2[])
{	
	
	for (int i = 0; i < SIZE; i++ )
	switch (array2[i])
	{
	case 20:
		array[0] += 1;
		break;
	case 19:
		array[1] += 1;
		break;
	case 18:
		array[2] += 1;
		break;
	case 17:
		array[3] += 1;
		break;
	case 16: 
		array[4] += 1;
		break;
	case 15:
		array[5] += 1;
		break;
	case 14:
		array[6] += 1;
		break;
	case 13:
		array[7] += 1;
		break;
	case 12:
		array[8] += 1;
		break;
	case 11:
		array[9] += 1;
		break;
	case 10:
		array[10] += 1;
		break;
	case 9:
		array[11] += 1;
		break;
		case 8:
		array[12] += 1;
		break;
	case 7:
		array[13] += 1;
		break;
	case 6:
		array[14] += 1;
		break;
	case 5:
		array[15] += 1;
		break;
	case 4:
		array[16] += 1;
		break;
	case 3:
		array[17] += 1;
		break;
	case 2:
		array[18] += 1;
		break;
	case 1:
		array[19] += 1;
		break;

	default:
		break;
	}
	
	cout << "\n N" << "\t" << "Count\n";
	cout << "----\t-----\n";	
	
	for (int index = 0; index < RANGE; index++)
		if(frequency_list[index] != 0)
		cout << display_list[index] << "\t  " << frequency_list[index] << endl;
	cout << "\nPress <Enter> when finished viewing results";
	cin.get();
		
}
////////////////////////////////////////////////////////////////////////////////

 













