#include <iostream>

using namespace std;

int main () {
	
	int tinggi;
	int nilai;
	
	
	cout << "Masukkan tinggi badan anda : ";
	cin >> tinggi;
	
	cout << "Masukkan nilai anda : ";
	cin >> nilai;
	
	if (tinggi>=175 & nilai>=80) {
		cout << "Selamat anda diterima sebagai akpol";

	}
	else{
		cout << "Maaf anda belum bisa bergabung";
	}
}
