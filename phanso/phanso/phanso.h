// phanso.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
using namespace std; 
class phanso {
private:
	int tu_so;
	int mau_so;
public :
	//hàm setter
	void set(int TS, int MS) {
		tu_so = TS;
		mau_so = MS;
	}
	void nhap_phanso() {
		cout << "Nhap tu so : "; cin >> tu_so; 
		do {
			cout << "Nhap mau so ( khac 0 ): "; cin >> mau_so;
		} while (mau_so == 0);
	}
	void hien_thi_phanso() {
		cout << tu_so << "/" << mau_so;
	}
	// Hàm cộng hai phân số
	phanso cong(const phanso& ps) const {
		phanso ket_qua;
		ket_qua.tu_so = tu_so * ps.mau_so + ps.tu_so * mau_so;
		ket_qua.mau_so = mau_so * ps.mau_so;
		return ket_qua;
	}
};
// TODO: Reference additional headers your program requires here.
