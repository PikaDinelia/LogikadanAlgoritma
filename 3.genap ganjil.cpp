#include <iostream>
using namespace std;

string cekGenapGanjil(int angka) {
    if (angka % 2 == 0) {
        return "GENAP";
    } else {
        return "GANJIL";
    }
}

int main() {
    int angka1, angka2, angka3;

    cout << "Input ANGKA-1: ";
    cin >> angka1;
    cout << "Input ANGKA-2: ";
    cin >> angka2;
    cout << "Input ANGKA-3: ";
    cin >> angka3;
    cout << endl;
    cout << "Hasil dari bilangan di atas adalah : " << endl;
    
    cout << "ANGKA-1 = " << angka1 << " adalah " << cekGenapGanjil(angka1) << endl;
    cout << "ANGKA-2 = " << angka2 << " adalah " << cekGenapGanjil(angka2) << endl;
    cout << "ANGKA-3 = " << angka3 << " adalah " << cekGenapGanjil(angka3) << endl;

    return 0;
}

