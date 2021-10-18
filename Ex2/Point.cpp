#include "Point.h"


void point::input()
{
	cout << "Nhap ten diem: ";
	cin >> name;

	cout << "Nhap hoanh do cua diem " << name << ": ";
	cin >> x;

	cout << "Nhap tung do cua diem " << name << ": ";
	cin >> y;
}


void point::output()
{
	cout << name << "(" << x << ", " << y << ")";
}


float point::distance(point p)
{
	return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}