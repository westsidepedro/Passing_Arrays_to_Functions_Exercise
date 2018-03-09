//============================================================================
// Name        : Passing_Arrays_to_Functions_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string want(int nElements, string xy[])
    {
    int x = nElements - 1;
    for (int i = 0; i < nElements; i++)
	{
	cout << xy[i] << flush;
	if (x >= 0)
	    {
	    cout << ", " << xy[x] << flush;
	    }
	cout << endl;
	x--;
	}

    }

int main()
    {

    string list[] =
	{
	"Milk", "Bread", "Juice", "Soda", "Candy"
	};
    want(5, list);

    return 0;
    }
