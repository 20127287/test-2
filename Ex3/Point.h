#pragma once
#include <iostream>

using namespace std;


class point {
private:
	char name;
	float x;
	float y;

public:
	// Hàm nhập điểm:
	void input();

	// Hàm xuất điểm
	void output();

	// Hàm tính khoảng cách giữa 2 điểm
	float distance(point p);
};