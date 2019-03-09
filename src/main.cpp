#include <iostream>
#include "input.h"
#include "print.h"
#include "create_set.h"

using namespace std;

int main()
{
  char a;
  int repeat=1;
  int array[9][9];
  cout<<"Enter the suduko:"<<endl;
  input(array);
  cout<<endl<<"Unsolved suduko is:"<<endl;
	print(array);
	while(repeat!=0)
	  {
	    repeat=0;
	    for(int k=0;k<3;k++)
	      for(int l=0;l<3;l++)
		{
		  repeat=box(array,k,l)+repeat;
		}	    
	  }
	print(array);
	cin>>a;
	return 0;
}
