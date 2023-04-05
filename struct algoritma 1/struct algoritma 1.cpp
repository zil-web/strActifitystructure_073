#include<iostream>
using namespace std;

struct mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;

};

int main() {
	mahasiswa mhs, mhs2;

	mhs.nim = "20210140073";
	mhs.umur = 19;
	mhs.nama = "aagil imam";
	mhs.alamat = "riau";

	cout << "masukan NIMM ; ";
	cin >> mhs2.nim;
	cout << "masukan umur : ";
	cin >> mhs2.umur;

};