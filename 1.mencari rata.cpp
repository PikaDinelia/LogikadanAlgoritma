#include <iostream>
using namespace std;

main() {
    
    float angka1, angka2, angka3, total;
    
    cout << "masukkan bilangan ke1     : "; cin >> angka1;
    cout << "masukkan bilangan ke2     : "; cin >> angka2;
    cout << "masukkan bilangan ke3     : "; cin >> angka3;
    
    total = (angka1 + angka2 + angka3) / 3;
    
    cout << "rata-rata dari 3 bilangan diatas adalah     : " << total;
}
