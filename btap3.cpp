#include <iostream>
using namespace std;
main()
{
	float toan, ly, hoa;
	cin >> toan >> ly >> hoa;
	if (toan >=0 && toan<=10)
	{
		cout << toan << endl;
	}
	else
	{
		cout << "ban da nhap sai roi";
	}
	if (ly >=0 && ly<=10)
	{
		cout << ly <<endl;
	}
	else
	{
		cout << "ban da nhap sai roi";
	}
	if (hoa>=0 && hoa<=10)
	{
		cout << hoa <<endl;
	}
}
