// CPP_TinhTienNopNganHang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double sovon, lai, laisuat = 0.08;
	cout << "Nhap so tien gui tiet kiem: ";
	cin >> sovon;
	for (int i = 1; i <= 10; i++)
	{
		lai = sovon * laisuat;
		cout << "nam" << i << "sovon" << sovon << "lai" << lai << endl;
		sovon = sovon + lai;

	}

}
   