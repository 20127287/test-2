#include "Rectangle.h"


void rectangle::input()
{
	cout << "Nhap diem thu nhat: " << endl;
	p1.input();
	cout << endl;

	cout << "Nhap diem thu hai: " << endl;
	p2.input();
	cout << endl;

	cout << "Nhap diem thu ba: " << endl;
	p3.input();
	cout << endl;

	cout << "Nhap diem thu tu: " << endl;
	p4.input();
}


void rectangle::output()
{
	p1.output();
	cout << "; ";
	p2.output();
	cout << "; ";
	p3.output();
	cout << "; ";
	p4.output();
}


bool rectangle::validCheck()
{
	// Kiểm tra xem có điểm nào trùng nhau hay không:
	if (p1.distance(p2) == 0 || p1.distance(p3) == 0 || p1.distance(p4) == 0)
		return false;

	// Kiểm tra cặp cạnh đối thứ nhất:
	else if (p1.distance(p2) != p3.distance(p4))
		return false;

	// Kiểm tra cặp cạnh đối thứ hai:
	else if (p1.distance(p4) != p2.distance(p3))
		return false;

	// Kiểm tra 2 đường chéo:
	else if (p1.distance(p3) != p2.distance(p4))
		return false;

	return true;
}


float rectangle::perimeter()
{
	return 2 * (p1.distance(p2) + p2.distance(p3));
}


float rectangle::area()
{
	return p1.distance(p2) * p2.distance(p3);
}