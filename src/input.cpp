#include "input.h"
#include <iostream>

using namespace std;


void input(int array[][9])
{
	int temp;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			
			cin>>array[i][j];
		}
	}
}

