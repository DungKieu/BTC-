#include <iostream>
using namespace std;
main ()
{
	int a;
	cin >> a;
	if (a==1 || a==3 || a==5 || a==8 || a==10 || a==12)
	{
		cout << "so ngay la 31";
	}
	else if (a==4 || a==6 || a==9 || a==11)
	{
		cout << "so ngay la 30";
	}
	else 
	{
		int year;
		cin >> year;
		if (((year % 4)==0 && (year % 4)!=0) || ((year % 400)==0))
		{
			cout << "so ngay la 28";
		}
		else
		{
			cout << "so ngay la 29";
		}
	}
}
