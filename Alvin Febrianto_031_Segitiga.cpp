#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main() {
	int alas, tinggi, sisi_miring, keliling;
	
	cout << " Program Menghitung Sisi Miring dan Keliling Segitiga Siku-Siku\n " << endl;
	cout << " Tinggi: ";
	cin >> tinggi;
	cout << " Alas  : ";
	cin >> alas;
	cout << endl;
	
	sisi_miring=sqrt(alas*alas+tinggi*tinggi);
	cout << " Sisi Miring = " << sisi_miring << endl;
	keliling=alas+tinggi+sisi_miring;
	cout << " Keliling    = " << keliling << endl;
	
	getch();
}
