// phanso.cpp : Defines the entry point for the application.
//

#include "phanso.h"

using namespace std;

int main()
{
	
	phanso Phan_so1,Phan_so2;
	//nhap phan so thu 2
	cout << "Nhap phan so thu nhat "<<endl ;
	Phan_so1.nhap_phanso();
	cout << "Phan so thu nhat : ";
	Phan_so1.hien_thi_phanso();
	//nhap phan so thu 2
	cout << endl; 
	cout << "Nhap phan so thu hai " << endl;
	Phan_so2.nhap_phanso();
	cout << "Phan so thu hai : ";
	Phan_so2.hien_thi_phanso();
	cout << endl;
	// Cộng hai phân số
	phanso ket_qua = Phan_so1.cong(Phan_so2);

	// Hiển thị kết quả
	cout << "Tong hai phan so: ";
	ket_qua.hien_thi_phanso();
	
	cout << endl;
	return 0;
}
