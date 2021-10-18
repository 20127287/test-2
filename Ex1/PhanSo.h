#pragma once
#include <iostream>

using namespace std;


class phanSo {
private:
	int tu;
	int mau;

public:
	// Hàm nhập phân số
	void input();

	// Hàm xuất phân số theo dạng (tử/mẫu)
	void outputPS();

	// Hàm xuất phân số theo dạng thập phân
	void outputTP();

	// Hàm cộng phân số
	void cong(phanSo ps1, phanSo ps2);

	// Hàm trừ phân số
	void tru(phanSo ps1, phanSo ps2);

	// Hàm nhân phân số
	void nhan(phanSo ps1, phanSo ps2);

	// Hàm chia phân số
	void chia(phanSo ps1, phanSo ps2);
};

// phuoc