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
}