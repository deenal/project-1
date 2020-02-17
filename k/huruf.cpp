#include<iostream>
using namespace std;

intmain()
{
	char huruf;
a:
	cout<<"masukkanhuruf(a/l)=";
	cin>>huruf;
	
	if (huruf == 'a')
		{
		cout<<"   **** \n ********\n***    ***\n**********\n**********\n***    ***\n***    ***"<<endl;
		goto a;
		}
	else if(huruf == 'l')
		{
		cout<<"***   \n***   \n***   \n***   \n***   \n************\n************"<<endl;
		goto a;
		}
	
	return 0;
 }

