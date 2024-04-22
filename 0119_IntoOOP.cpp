#include <iostream>
using namespace std;

class mahasiswa {
public : // akses modifier
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "nama : " << nama << endl;
		cout << "umur : " << umur << endl;
		cout << "jurusan : " << endl;
	}

};


class Matakuliah {
private:
	string kodemk;
	string namamk;
	int sks;
public :
	void input() {
		cout << "kode mk :";
		cin >> kodemk;
		cout << "nama mk :";
		cin >> namamk;
		cout << "sks :";
		cin >> sks;


	}
};
