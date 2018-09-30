#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(int argc,char *argv[])
{
	
	if(strcmp(argv[1],"-help")==0)
	cout<<"Yardidm mi istediniz";
	
	
	int array[argc-1];
	int i,temp,j;
	
	for(i=1;i<argc;i++)
	array[i]=atoi(argv[i]);
	
	for(i=1;i<argc;i++)
	cout <<endl<<array[i];
	
	for(i=0 ; i<argc ; i++)
	{
		for(j=argc-1 ; j>i ;j--)
		{
			if(array[j] > array[i])
			{
			  temp=array[i];
		   	  array[i]=array[j];
			  array[j]=temp;
			}

		}
	}
	
	cout<<endl;
	for(i=1;i<argc;i++)
	cout <<endl<<array[i];
	
	
	return 0;
}
