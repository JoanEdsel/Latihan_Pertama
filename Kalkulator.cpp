#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Kelompok" << endl;
	cout << "-Joan" << endl;
	cout << "-Jean" << endl;
	cout << "-Marc" << endl;
	cout << "-Vellen" << endl;
	
	int angka1,angka2, pil;
	float hasil;
	string operasi;
	
	cout << "Pilih Perhitungan Yang Diinginkan" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "5. Modulus" << endl << endl;
	
	cout << "Masukkan Pilihan. Contoh: 1 (untuk penjumlahan): ";
	cin >> pil;
	cout << "Masukkan Bilangan Pertama: ";
	cin >> angka1;
	cout << "Masukkan Bilangan Kedua: ";
	cin >> angka2;
	
	switch(pil) {
		case 1 : hasil=angka1+angka2;
			operasi='+';
			break;
		case 2 : hasil=angka1-angka2;
			operasi='-';
			break;
		case 3 : hasil=angka1*angka2;
			operasi='*';
			break;
		case 4 : hasil=angka1/angka2;
			operasi='/';
			break;
		case 5 : hasil=angka1%angka2;
			operasi='%';
			break;
		default :
			cout << "Salah Masukan Operator" << endl;
	} 
	cout << "-----------------------------" << endl;
	cout << "    " << angka1 << operasi << angka2 << "=" << hasil << endl;
	cout << "-----------------------------" << endl;
	
	getch();
}
