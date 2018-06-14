#include <iostream>
using namespace std;
main ()
{
	float computerstationery, fixeddisks, computers;
	
	cout << "Nhap gia tri cua computerstationery la: " << endl;
	cin >> computerstationery;
	
	if (computerstationery>=500)
	{
		cout << "Gia tien duoc giam la " << (computerstationery*0.88) << endl;
	}
	else if (computerstationery>=300 && computerstationery<500)
	{
		cout << "Gia tien duoc giam la " << (computerstationery*0.92) << endl;
	}
	else
	{
		cout << "Gia tien duoc giam la " << (computerstationery*0.98) << endl;
	}
	
	cout << "Nhap gia tri cua fixed disks la: " << endl;
	cin >> fixeddisks;
	
	if (fixeddisks>=2000)
	{
		cout << "Gia tien duoc giam la " << (fixeddisks*0.9) << endl;
	}
	else
	{
		cout << "Gia tien duoc giam la " << (fixeddisks*0.95) << endl;
	}
	
	cout << "Nhap gia tri cua computers la: " << endl;
	cin >> computers;
	
	if (computers>=5000)
	{
		cout << "Gia tien duoc giam la " << (computers*0.9);
	}
	else
	{
		cout << "Gia tien duoc giam la " << (computers*0.95);
	}
}
