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

	double V, m, ro;
		std::cout<<"Enter body volume:";
		std::cin>>V;
		std::cout<<"OK, now enter body mass:";
		std::cin>>m;
		ro = m/V;
		std::cout<<"Density is:"<<ro<<"\n"; //(1)

	double x2, a2, b2;
		std::cout<<"Enter a!=0, b:";
		std::cin>>a2>>b2;
		if (a2 == 0){
			std::cout<<"'A' should not be equal to 0";
			std::cin>>a2;
		}
		else{
			x2 = -b2/a2;
			std::cout<<"Density is:"<<ro<<"\n";
		}

	system("pause");
	return 0;
}

