#include <iostream>
#include  <string.h>
#include  <conio.h>
using namespace std;


int main()
{
	int islem;
do{
	system("CLS");
	FILE *pfile;
	pfile=fopen("example.txt","a+");
	int i=1,n=1;
	char *metin;
	char array1[256];
	//fgets(array1,256,stdin);

	char sentence[10];
	cout<<"Lutfen eklemek istediginiz kelimeyi giriniz:";
	cin>>sentence;
	
	fgets(array1,256,pfile);
	metin=strtok(array1,"*");
//	cout<<metin;
    n=strncmp(sentence,metin,sizeof(sentence));
   	cout<<endl<<i<<"-"<<metin;
   if(n==0)
   {
	cout<<" var.";
	fclose(pfile);
	return 1;
   }
   
  // cout<<endl<<i<<" "<<metin<<" "<<n<<" "<<sentence<<" ";
	while(metin!='\0')
	{
		metin=metin+1;
	    metin=strtok(NULL,"*");
		i++;
	    if(metin!='\0')
	    {
	    	n=strncmp(sentence,metin,sizeof(sentence));
	    	cout<<endl<<i<<"-"<<metin;
		}
		
	    //cout<<endl<<i<<" "<<metin<<" "<<n<<" "<<sentence;
	   
	    
    if(n==0)
    {
	 cout<<" var.";
	 fclose(pfile);
	 cin.get();
	 return 0;
    }

	}
	

		cout <<endl<<i<<"-"<<sentence<<" EKLENDI.";
		fputs(sentence,pfile);
		fputs("*",pfile);

    
	    fclose(pfile);
	    cout<<endl<<"devam icin 1: ";
		cin>>islem;
}while(islem==1);
	
	    cin.get();
	    	return 0;
	
}
