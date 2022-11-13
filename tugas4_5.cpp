#include <iostream>
using namespace std;

int main (){
    int total;
    int kodsu, jum;
    char ukuran;

    cout << "----System How to Buy a milk----"<<endl;
    cout<< "Kode Susu" << endl;
    cout<<"1.DANCOW"<< endl;
    cout<<"2.INDOMILK" <<endl;
    cout<<"3.SUSTACAL"<<endl;

    cout << "Masukkan kode susu : ";
    cin >> kodsu;

    if (kodsu==1){
        cout << "---DANCOW---" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> jum;
            total = jum * 10000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jum;
            total = jum * 4250;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jum;
            total = jum * 2100;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodsu==2){
        cout << "---INDOMILK---" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> jum;
            total = jum * 8500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jum;
            total = jum * 4000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jum;
            total = jum * 2025;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodsu==3){
        cout << "---SUSTACAL---" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> jum;
            total = jum * 17000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jum;
            total = jum * 14500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> jum;
            total = jum * 8300;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }

    return 0;
}
