#include "stdafx.h"
#include "iostream"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c, d;														//yslovie
	pair<int, int> A(a, b);
	pair<int, int> B(c, d);
Met1:	cout << "Enter position A:";
		cin >> A.first >> A.second;
		if (A.first<1 || A.first>8 || A.second<1 || A.second>8){
			cout<<"Error position A"<<endl;
			goto Met1;}
Met2:	cout << "Enter position B:";
		cin >> B.first >> B.second;
		if (B.first<1 || B.first>8 || B.second<1 || B.second>8){
			cout<<"Error position B"<<endl;
			goto Met2;}

	if (A.first == B.first || A.second == B.second) cout << "The rook in position A threatens square B!"; //1
		else cout << "The rook in position A does not threaten the square B";

int i1, i2;
	for(i1 = A.first, i2 = A.second; i1 != 1 || i2 != 1; i1 --, i2 --)
	{
			if (B.first == i1 && B.second == i2) cout<<"Bishop in position A threatens square B";
			else {
					for(i1 = A.first, i2 = A.second; i1 != 1 || i2 != 1; i1 --, i2 ++)
					{
							if (B.first == i1 && B.second == i2) cout<<"Bishop in position A threatens square B";
							else {
									for(i1 = A.first, i2 = A.second; i1 != 1 || i2 != 1; i1 ++, i2 --)
									{
										if (B.first == i1 && B.second == i2) cout<<"Bishop in position A threatens square B";
										else {
												for(i1 = A.first, i2 = A.second; i1 != 1 || i2 != 1; i1 ++, i2 ++)
												{
													if (B.first == i1 && B.second == i2) cout<<"Bishop in position A threatens square B";
													else cout << "The bishop in position A does not threaten the square B";
												}
											 }
									}
								 }
					}
				 }
	}
	system("pause");
	return 0;
}
