#include <iostream>
using namespace std;
main ()
{
	string name;
	float toan, ly, hoa,a;
	cout << "nhap ho va ten cua ban" << endl;
	getline (cin,name);
	cout << "nhap diem toan la:" <<endl;
	cin >> toan;
	cout << "nhap diem ly la:" << endl;
	cin >> ly;
	cout << "nhap diem hoa la:" <<endl;
	cin >> hoa;
	a = (toan+ly+hoa)/3;
	cout << "diem trung binh ba mon la:" << a <<endl;
	if (a >= 8)
	{
		cout << "xep loai xuat sac" <<endl;
	}
	else if (a>=7 && a<8)
	{
		cout << "xep loau gioi" << endl;
	}
	else if (a>=6 && a<7)
	{
		cout << "xep loai kha" <<endl;
	}
	else if (a>=5 && a<6)
	{
		cout << "xep loai trung binh" << endl;
	}
	else
	{
		cout << "xep loai yeu" <<endl;
	}
}
