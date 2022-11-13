#include <iostream>
using namespace std;

    int main(){
    int angka;
        cout << " === Program Menentukan Genap & Ganjil pada angka bilangan ===" << endl;
        cout <<"------------------------------------------------------" << endl;
        cout << endl;
        cout << "Masukan sebuah Angka: " << endl;
        cin >> angka;

       if (angka % 2 == 0){
        cout << "Merupakan Bilangan Genap: " << angka << endl;
        }else{
        cout << "Merupakan Bilangan Ganjil: " << angka << endl;
        }
    return 0;
    }
