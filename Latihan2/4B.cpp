#include <conio.h>
#include <iostream>
using namespace std;

main() {
	int s, r;
	float hasil;
	float LuasPersegi;
	float LuasLingkaran;
	
	cout <<"===program menentukan luas daerah diarsir===";
	cout<<"\n\n";
	cout <<"Masukan sisi persegi = "; cin>>s;
	LuasPersegi =s*s;
	cout<<"Luas Persegi = "<<LuasPersegi;
	cout<<"\n";
	cout <<"Masukan jari-jari Lingkaran = "; cin>>r;
	LuasLingkaran =3.14*r*r;
	cout<<"Luas Lingkaran = "<<LuasLingkaran;
	hasil =LuasPersegi-LuasLingkaran;
	cout<<"\n";
	cout<<"Luas yang diarsir (persegi) = "<<hasil;
	getch();
}
