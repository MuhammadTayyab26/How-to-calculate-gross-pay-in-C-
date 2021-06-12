#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	float bp,da,hra,grpay;
	cout<<"Enter Basic Pay : ";
	cin>>bp;
	da=bp*40/100;
	hra=bp*20/100;
	grpay=bp+da+hra;	
	cout<<"gross pay : "<<grpay;
	
	return 0;
}
