#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[5];
	int i;
	
	for(i=0;i<=4;i++)
	{
		cout<<"Please enter a number :"<<endl;
		cin>>array[i];
	}
	
	
	int s,x,y,i,j;
	s=array[1]-array[0];
	
	if(s<=0)
	s=(-1)*s;
	
	x=array[0];
	y=array[1];
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i!=j)
			{
				int a=array[j]-array[i];
				
				if(a<0)
				a=(-1)*a;
				
				if(a<s)
				{
					s=a;
					x=array[i];
					y=array[j];
				}
				
			}
		}
	}
	
	cout << endl <<"Nearest numbers " << x <<"-"<< y <<" (by "<< s << " )"; 
	system("PAUSE");
	return 0;
}
