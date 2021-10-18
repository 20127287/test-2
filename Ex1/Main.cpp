#include "PhanSo.h"

void menu();

int main()
{
	phanSo ps1, ps2, ps;
	int choice;

input:
	system("cls");
		cout << "Nhap phan so thu nhat:" << endl;
		ps1.input();
		cout << "=> Phan so thu nhat: ";
		ps1.outputPS();
		cout << "\n************************************************\n";
		cout << "Nhap phan so thu hai:" << endl;
		ps2.input();
		cout << "=> Phan so thu hai: ";
		ps2.outputPS();
		cout << endl << endl;
		system("pause");

	do {
		system("cls");
		menu();
		cout << "\nNhap chuc nang can thuc hien: ";
		cin >> choice;

		switch (choice) {
		case 1:
			goto input;
			break;


		case 2:
			ps.cong(ps1, ps2);

			cout << "\nKet qua duoi dang phan so: ";
			ps1.outputPS();
			cout << " + ";
			ps2.outputPS();
			cout << " = ";
			ps.outputPS();
			cout << endl;

			cout << "\nKet qua duoi dang thap phan: ";
			ps1.outputPS();
			cout << " + ";
			ps2.outputPS();
			cout << " = ";
			ps.outputTP();
			cout << endl << endl;

			break;


		case 3:
			ps.tru(ps1, ps2);

			cout << "\nKet qua duoi dang phan so: ";
			ps1.outputPS();
			cout << " - ";
			ps2.outputPS();
			cout << " = ";
			ps.outputPS();
			cout << endl;

			cout << "\nKet qua duoi dang thap phan: ";
			ps1.outputPS();
			cout << " - ";
			ps2.outputPS();
			cout << " = ";
			ps.outputTP();
			cout << endl << endl;

			break;


		case 4:
			ps.nhan(ps1, ps2);

			cout << "\nKet qua duoi dang phan so: ";
			ps1.outputPS();
			cout << " * ";
			ps2.outputPS();
			cout << " = ";
			ps.outputPS();
			cout << endl;

			cout << "\nKet qua duoi dang thap phan: ";
			ps1.outputPS();
			cout << " * ";
			ps2.outputPS();
			cout << " = ";
			ps.outputTP();
			cout << endl << endl;

			break;


		case 5:
			ps.chia(ps1, ps2);

			cout << "\nKet qua duoi dang phan so: ";
			ps1.outputPS();
			cout << " / ";
			ps2.outputPS();
			cout << " = ";
			ps.outputPS();
			cout << endl;

			cout << "\nKet qua duoi dang thap phan: ";
			ps1.outputPS();
			cout << " / ";
			ps2.outputPS();
			cout << " = ";
			ps.outputTP();
			cout << endl << endl;

			break;


		case 0:
			break;


		default:
			cout << "Chuc nang khong ton tai." << endl << endl;
		}
		
		system("pause");
	} while (choice != 0);
	
	return 0;
}


void menu()
{
	cout << "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t***\t\t\t - MENU -\t\t\t***\n"
		<< "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t* [1]. Nhap phan so.\t\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [2]. Cong hai phan so.\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [3]. Tru hai phan so.\t\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [4]. Nhan hai phan so.\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [5]. Chia hai phan so.\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [0]. Exit.\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t***********************************************************\n";
}