#include <iostream>
using namespace std;

void inter_login()
{
	cout << "======================================================================" << "\n";
	cout << "========================  ASSALAMUALAIKUM  ===========================" << "\n";
	cout << "========   Selamat Datang di Aplikasi Penjadwalan Kajian  ============" << "\n";
	cout << "===============   Silakan Login Terlebih Dahulu   ====================" << "\n";
	cout << "======================================================================" << "\n";
}

void usr_menu()
{
	cout << "======================================================================" << "\n";
	cout << "============================  Menu Pengguna  =========================" << "\n";
	cout << " 1. Pencarian Pengisi Kajian " << "\n";
	cout << " 2. Pencarian Berdasarkan Tanggal " << "\n";
	cout << " 3. Pencarian Berdasarkan Waktu " << "\n";
	cout << " 4. Pengurutan Berdasarkan Tanggal dan Waktu " << "\n";
}
int main()
{
//	inter_login();
	usr_menu();
}
