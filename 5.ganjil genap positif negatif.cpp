#include <iostream>
using namespace std;
 
int main()
{
    int num;
    
    cout << "masukkan bilangan = ";
    cin >> num;
 
    // Checking for odd and even
    if (num % 2 == 0) {
        cout << num << " Bilangan Genap";
    }
    else {
        cout << num << " Bilangan Ganjil";
    }
 
    // Checking for positive, negative or zero
    if (num > 0) {
        cout << " dan Positif";
    }
    else if (num == 0) {
        cout << " Nol";
    }
    else {
        cout << " dan Negatif" << endl;
    }
    
    return 0;
}
