#include <iostream>
using namespace std;
main ()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (a>b && a>c)
	{
		cout << "gia tri lon nhat la:" << a;
	}
	else if (b>a && b>c)
	{
		cout << "gia tri lon nhat la:" <<b;
	}
	else
	{
		cout << "gia tri lon nhat la:" <<c;
	}
}
