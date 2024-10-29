# include <stdio.h>
# include <conio.h>
#include <iostream>

using namespace std;

main() {
 char nama[20];
 char tempatlahir[20];
 char tgllahir[20];
 char alamat[20];
 char hobi[20];
 
 cout<<"   INPUT BIODATA  "; gets;
 cout<<"\n";
 cout<<"=================="; gets;
 cout<<"\n";
 cout<<"NAMA		: "; gets(nama);
 cout<<"TEMPAT LAHIR	: "; gets(tempatlahir);
 cout<<"TGL LAHIR	: "; gets(tgllahir);
 cout<<"ALAMAT		: "; gets(alamat);
 cout<<"HOBI		: "; gets(hobi);
 
 cout<<"\n\n";
 cout<<"   MY BIODATA   "; gets;
 cout<<"\n";
 cout<<"================"; gets;
 cout<<"\n";
 cout<<"NAMA		: "<<nama; 
 cout<<"\n";
 cout<<"TEMPAT LAHIR	: "<<tempatlahir;
 cout<<"\n";
 cout<<"TGL LAHIR	: "<<tgllahir;
 cout<<"\n";
 cout<<"ALAMAT		: "<<alamat;
 cout<<"\n";
 cout<<"HOBI		: "<<hobi;
 
} 
