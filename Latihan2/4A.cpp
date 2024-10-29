#include <conio.h>
#include <iostream>
using namespace std;

main() {
	int a, t, r;
	float hasil;
	float LuasJajarGenjang;
	float LuasLingkaran;
	
	cout <<"===program menentukan luas daerah diarsir===";
	cout<<"\n\n";
	cout <<"Masukan alas jajar genjang = "; cin>>a;
	cout <<"Masukan tinggi jajar genjang = "; cin>>t;
	LuasJajarGenjang =a*t;
	cout<<"Luas Jajar Genjang = "<<LuasJajarGenjang;
	cout<<"\n";
	cout <<"Masukan jari-jari Lingkaran = "; cin>>r;
	LuasLingkaran =3.14*r*r;
	cout<<"Luas Lingkaran = "<<LuasLingkaran;
	hasil =LuasJajarGenjang-LuasLingkaran;
	cout<<"\n";
	cout<<"Luas yang diarsir = "<<hasil;
	getch();
}
