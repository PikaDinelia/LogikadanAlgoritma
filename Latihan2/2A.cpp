#include <conio.h>
#include <iostream>
using namespace std;

main() {
	int a, t, s;
	float hasil;
	float LuasSegitiga;
	float LuasPersegi;
	
	cout <<"===program menentukan luas daerah tidak diarsir===";
	cout<<"\n\n";
	cout <<"Masukan sisi persegi = "; cin>>s;
	LuasPersegi =s*s;
	cout<<"Luas persegi = "<<LuasPersegi;
	cout<<"\n";
	cout <<"Masukan alas segitiga = "; cin>>a;
	cout <<"Masukan tinggi segitiga = "; cin>>t;
	LuasSegitiga =0.5*a*t;
	cout<<"Luas segitiga = "<<LuasSegitiga;
	hasil =LuasPersegi-LuasSegitiga;
	cout<<"\n";
	cout<<"Luas yang tidak diarsir (persegi) = "<<hasil;
	getch();
}
