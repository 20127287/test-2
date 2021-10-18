#include "Point.h"


int main()
{
	point p1, p2;

	cout << "Nhap diem thu nhat:" << endl;
	p1.input();
	cout << endl;

	cout << "Nhap diem thu hai:" << endl;
	p2.input();
	cout << endl;

	cout << "Cac diem vua nhap: ";
	p1.output();
	cout << "; ";
	p2.output();

	cout << endl << "Khoang cach giua 2 diem la: " << p1.distance(p2) << endl;

	return 0;
}