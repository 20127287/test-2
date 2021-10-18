#pragma once
#include "Point.h"


class rectangle {
private:
	point p1, p2, p3, p4;

public:
	// Hàm nhập hình chữ nhật
	void input();

	// Hàm xuất hình chữ nhật
	void output();

	// Hàm kiểm tra xem hình chữ nhật có hợp lệ hay không
	bool validCheck();

	// Hàm tính chu vi hình chữ nhật
	float perimeter();

	// Hàm tính diện tích hình chữ nhật
	float area();
};