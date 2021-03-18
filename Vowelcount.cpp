#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int sum=0,suma=0,sume=0,sumi=0,sumo=0,sumu=0;
	int i;
	char str[50];
	cout<<" ENTER A STRING : ";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
		{
			sum++;
		}
		if(str[i]=='A' || str[i]=='a')
		{
			suma++;
		}
		if(str[i]=='E' || str[i]=='e')
		{
			sume++;
		}
		if(str[i]=='I' || str[i]=='i')
		{
			sumi++;
		}
		if(str[i]=='O' || str[i]=='o')
		{
			sumo++;
		}
		if(str[i]=='U' || str[i]=='u')
		{
			sumu++;
		}
	}
	cout<<"\n TOTAL NUMBER OF VOWELS : "<<sum;
	cout<<"\n NUMBER OF 'A'          : "<<suma;
	cout<<"\n NUMBER OF 'E'          : "<<sume;
	cout<<"\n NUMBER OF 'I'          : "<<sumi;
	cout<<"\n NUMBER OF 'O'          : "<<sumo;
	cout<<"\n NUMBER OF 'U'          : "<<sumu;
	return 0;
}

