#include <conio.h>
#include <iostream>
using namespace std;

main() {
	int p, l, r;
	float hasil;
	float LuasPersegiPanjang;
	float LuasLingkaran;
	
	cout <<"===program menentukan luas daerah tidak diarsir===";
	cout<<"\n\n";
	cout <<"Masukan Panjang persegi panjang = "; cin>>p;
	cout <<"Masukan Lebar persegi panjang = "; cin>>l;
	LuasPersegiPanjang =p*l;
	cout<<"Luas Persegi Panjang = "<<LuasPersegiPanjang;
	cout<<"\n";
	cout <<"Masukan jari-jari Lingkaran = "; cin>>r;
	LuasLingkaran =3.14*r*r;
	cout<<"Luas Lingkaran = "<<LuasLingkaran;
	hasil =LuasPersegiPanjang-LuasLingkaran;
	cout<<"\n";
	cout<<"Luas yang tidak diarsir = "<<hasil;
	getch();
}
