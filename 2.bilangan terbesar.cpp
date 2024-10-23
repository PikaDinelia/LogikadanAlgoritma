#include <iostream>
using namespace std;

int main() {

  int maksimum, jumlah, i = 1, lokasi;

  cout << "Masukkan jumlah Bilangan: ";
  cin >> jumlah;

  int array[jumlah];

  cout << "Masukkan " << jumlah << " angka\n";
  for (i = 0; i < jumlah; i ++) {
    cout << "Input Bilangan-" <<(i+1) <<": ";
    cin >> array[i];
  }

  maksimum = array[0];

  for(i = 0; i < jumlah; i++) {
    if (array[i] > maksimum)  {
      maksimum = array[i];
      lokasi = i+1;
    }
  }

  cout << "JADI BILANGAN TERBESAR adalah : BILANGAN " << lokasi << " yaitu " << maksimum << endl;
}
