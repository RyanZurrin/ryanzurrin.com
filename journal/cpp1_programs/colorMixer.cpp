/*****************************************************************************
author:			Ryan Zurrin
program:    colorMixer.cpp  
date: 			9/28/19
assignment: Color Mixer pg. 223
purpose:    have the user enter two primary colors and display the new 
            mixed color.
*****************************************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    
    string color1, color2, color3;    

    cout << "Want to know what color you are mixing?\n"
         << "Please enter two primary colors (red, blue, or yellow) "
				 << "seperated by a space:\n"
         << "example: red blue -- then press ENTER -- lowercase please!" 
				 << endl;
				 
    cin >> color1 >> color2;
    color3 = color1 + color2;
    if ((color1 == "red" || "blue" || "yellow")&&
			 (color2 == "red" || "blue" || "yellow"))	// checking for correct input
    
        if (color3 == "bluered" || color3 == "redblue")
        {
            cout << "\nRed and Blue make Purple";
        }
        else if (color3 == "redyellow" || color3 == "yellowred")
        {
            cout << "\nRed and Yellow make Orange";
        }
        else if (color3 == "yellowblue" || color3 == "blueyellow")
        {
            cout << "\nYellow and Blue make Green";
        }
    
    else
    
        cout << "ERROR: Enter a valid PRIMARY color";
    
           
    
  getch();
  return 0;
}
