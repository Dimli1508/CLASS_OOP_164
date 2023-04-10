#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "Nim= " << nim;
		cout << "\nNama= " << nama;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {
		cout << "\nMasukkan Jumlah SKS= ";
		cin >> sks;
		cout << "\nMasukkan kode MK= ";
		cin >> kode;
		cout << "\nMasukkan Nama MK= ";
		cin >> namaMK;
	}
};