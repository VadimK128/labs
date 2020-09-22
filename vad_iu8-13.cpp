#include "stdafx.h"
#include "iostream"

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c;
		a = 1;
		b = 13;
		c = 49;
		std::cout<<a<< " "<< b<< " "<< c<< "\n"; //1

	char s;
		std::cout<<"Enter your char:";
		std::cin>>s;
		std::cout<<a<< s<< b<< s<< c<< s<<"\n"; //2

	int a1, b1, c1;
		std::cout<<"Enter 3 numbers:";
		std::cin>>a1>>b1>>c1;
		std::cout<<a1<< "  "<< b1<< "  "<< c1<< "\n"; //3

	double x, y, a2;
		std::cout<<"Enter your a:";
		std::cin>>a2;
		x = 12*a2*a2 + 7*a - 12;
		y = 3*x*x*x + 4*x*x - 11*x + 1;
		std::cout<<"x="<<x<<"\n"<<"y="<<y<<"\n"; //4

	
	system("pause");
	return 0;
}

