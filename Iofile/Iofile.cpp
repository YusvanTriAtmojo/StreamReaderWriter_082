#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//Membuat file dalam mode menulis.
	ofstream outfile;
	//Menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menulis dan measukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
}