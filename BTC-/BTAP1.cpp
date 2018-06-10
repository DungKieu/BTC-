#include <iostream>
using namespace std;
main()
{
	//int a,b;
//	cin >> a >> b;
//	cout << "tong cua a va b la:" << a + b; 
	//string a="Kieu Thi My Dung";
	//int toan = 10, ly = 8, hoa = 6;
	//cout << a << endl;
	//cout << "Diem toan la:" << toan << endl;
	//cout << "Diem ly la:" << ly << endl;
	//cout << "Diem hoa la:" << hoa << endl;
	//cout << "Diem trung binh 3 mon la:" << (toan+ly+hoa)/3;
	string myname;
	float toan, ly, hoa;
	cout << "Nhap ten cua ban vao: " << endl;
	getline (cin,myname);
	cout << "Nhap diem mon toan" <<endl;
	cin >> toan;
	cout << "Nhap diem mon ly" << endl;
	cin >> ly;
	cout << "Nhap diem mon hoa" <<endl;
	cin >> hoa;
	cout << "Ten cua ban la:" << myname <<endl;
	cout << "Diem mon toan:" << toan <<endl;
	cout << "Diem mon ly:" << ly <<endl;
	cout << "Diem mon hoa:" << hoa <<endl;
	cout << "Diem trung binh 3 mon:" << (toan+ly+hoa)/3;
}
// dieu kien toan, ly, hoa nam trong khoang 0 den 10
//neu nam trong khoang thi thuc hien tinh toan
// neu nam ngoai thi in ra man hinh ban da nhap sai roi

#include <iostream>
using namespace std;
main()
{
	float toan, ly, hoa;
	if 0 < toan <= 10
		{
		cout << "Nhap diem mon toan" <<endl;
		cin toan;
		}
	
}

