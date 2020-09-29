#include "stdafx.h"
#include "iostream"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int X, Y, Z;
	cout<<"Enter X:";
	cin>>X;
	cout<<"Enter Y:";
	cin>>Y;
	cout<<"Enter Z:";
	cin>>Z;

	if((X%2!=0) && (Y%2!=0) &&(Z%2!=0)) cout<<"1-st True"<<endl; //1
	else cout<<"1-st False"<<endl;

	if((X<20)^(Y<20)) cout<<"2-nd True"<<endl; //2
	else cout<<"2-nd False"<<endl;

	if((X==0)||(Y==0)) cout<<"3-d True"<<endl; //3
	else cout<<"3-d False"<<endl;

	if((X<0) && (Y<0) &&(Z<0)) cout<<"4-th True"<<endl; //4
	else cout<<"4-th False"<<endl;

	if((X%5==0)^(Y%5==0)^(Z%5==0)) cout<<"5-th True"<<endl; //5
	else cout<<"5-th False"<<endl;

	if((X>100)||(Y>100)||(Z>100)) cout<<"6-th True"<<endl; //6
	else cout<<"6-th False"<<endl;

	system("pause");
	return 0;
}

