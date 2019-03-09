#include "print.h"
#include<iostream>

using namespace std;

void print(int array[9][9])
{
	cout<<endl;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}

