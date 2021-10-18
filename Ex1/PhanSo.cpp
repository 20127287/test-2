#include "PhanSo.h"


void phanSo::input()
{
	cout << "Nhap tu so: ";
	cin >> tu;

	do {
		cout << "Nhap mau so: ";
		cin >> mau;
		if (mau == 0)
			cout << "Mau phai khac 0. Xin nhap lai." << endl;
	} while (mau == 0);

	//if (mau < 0) {
	//	tu = -tu;
	//	mau = -mau;
	//}
}


// Hàm tìm ước chung lớn nhất của 2 số
int GCD (int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}


void phanSo::outputPS()
{
	if (mau == 0)
		cout << "Khong xac dinh";

	else {
		if (mau < 0) {
			tu = -tu;
			mau = -mau;
		}

		cout << "(" << tu << "/" << mau << ")";
	}
}


void phanSo::outputTP()
{
	if (mau == 0)
		cout << "Khong xac dinh";

	else
		cout << float(tu * 1.0/ mau);
}


void phanSo::cong(phanSo ps1, phanSo ps2)
{
	if (ps1.mau != ps2.mau) {
		tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
		mau = ps1.mau * ps2.mau;
	}

	else {
		tu = ps1.tu + ps2.tu;
		mau = ps1.mau;
	}

	// Rút gọn
	int gcd = GCD(tu, mau);
	tu /= gcd;
	mau /= gcd;
}


void phanSo::tru(phanSo ps1, phanSo ps2)
{
	if (ps1.mau != ps2.mau) {
		tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
		mau = ps1.mau * ps2.mau;
	}

	else {

		tu = ps1.tu + ps2.tu;
		mau = ps1.mau;
	}

	// Rút gọn
	int gcd = GCD(tu, mau);
	tu /= gcd;
	mau /= gcd;
}


void phanSo::nhan(phanSo ps1, phanSo ps2)
{
	tu = ps1.tu * ps2.tu;
	mau = ps1.mau * ps2.mau;

	// Rút gọn
	int gcd = GCD(tu, mau);
	tu /= gcd;
	mau /= gcd;
}


void phanSo::chia(phanSo ps1, phanSo ps2)
{
	tu = ps1.tu * ps2.mau;
	mau = ps1.mau * ps2.tu;

	// Rút gọn
	int gcd = GCD(tu, mau);
	tu /= gcd;
	mau /= gcd;
}