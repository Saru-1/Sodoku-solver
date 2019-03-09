#include "create_set.h"
#include<iostream>
using namespace std;
int box(int array[][9],int k,int l)
{
  char a;
  int result[9][3],z=0;
  int flag=0,repeat=0;
  for(int num=1;num<=9;num++)
    {
      for(int i=k*3;i<k*3+3;i++)
	for(int j=l*3;j<l*3+3;j++)
	  if(array[i][j]==num)
	    flag=1;
      if(!flag)
	for(int i=k*3;i<k*3+3;i++)
	  for(int j=l*3;j<l*3+3;j++)
	    if(array[i][j]==0)
	      {
		result[z][0]=i;
		result[z][1]=j;
		result[z][2]=num;
      		z++;
	      }
      flag=0;
      for(int i=k*3;i<k*3+3;i++)
	for(int j=0;j<9;j++)
	  if(array[i][j]==num)
	    delete_elements_r(z,i,result);
      for(int j=l*3;j<l*3+3;j++)
	for(int i=0;i<9;i++)
	  if(array[i][j]==num)
	    delete_elements_c(z,j,result);
      if(z==1)
	{
	  int i,j;
	  i=result[0][0];
	  j=result[0][1];
	  array[i][j]=result[0][2];
	  repeat=1;
	}
      z=0;
    }
  return repeat;
}
void delete_elements_r(int &z,int i  ,int result[][3])
{
  char a;
  for(int j=0;j<z;j++)
    if(result[j][0]==i  )
      {
	for(int k=j;k<z;k++)
	  {
	  result[k][0]=result[k+1][0];
	  result[k][1]=result[k+1][1];
	  result[k][2]=result[k+1][2];
	  }
	z--;
	j--;
      }
}
void delete_elements_c(int &z,int j  ,int result[][3])
{
  for(int h=0;h<z;h++)
    if(result[h][1]==j  )
      {
	for(int k=h;k<z;k++)
	  {
	  result[k][0]=result[k+1][0];
	  result[k][1]=result[k+1][1];
	  result[k][2]=result[k+1][2];
	  }
	z--;
	h--;
      }
}
  
