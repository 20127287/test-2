#include "Rectangle.h"


int main()
{
	rectangle hcn;

	cout << "Nhap hinh chu nhat:" << endl;
	hcn.input();
	cout << endl;

	system("cls");
	cout << "Hinh chu nhat co cac dinh lan luot la: ";
	hcn.output();
	cout << endl << endl;

	if (!hcn.validCheck())
	cout << "Hinh chu nhat khong hop le.";

	else {
		cout << "Hinh chu nhat hop le." << endl;
		cout << "Chu vi hinh chu nhat la: " << hcn.perimeter() << endl;
		cout << "Dien tich hinh chu nhat la: " << hcn.area() << endl;
}

	cout << endl;
	return 0;
}