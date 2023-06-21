#include <fstream>
#include <iostream>
#include <array>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama File : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjukkan ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;
}