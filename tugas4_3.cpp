#include <iostream>
using namespace std;

    int main(){
        int tahun;
            cout << " === Kalender Tahun Kabisat ===" << endl;
            cout << "Masukkan tahun: ";
            cin >> tahun;

        if (tahun%400 == 0){
            cout << tahun << " Adalah Tahun Kabisat" << endl;
    }   else if(tahun%100 == 0){
            cout << tahun << " Bukan Termasuk Tahun Kabisat" << endl;
    }   else if(tahun%4 == 0){
            cout << tahun << " Merupakan Tahun Kabisat" << endl;
    }   else {
            cout << tahun << " Bukan  termasuk Tahun kabisat" << endl;
    }
    return 0;
}
