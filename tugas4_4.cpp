#include <iostream>
#include <string>
using namespace std;

int main (){
    int no;
    char ans;

    cout << "   Daftar menu makanan" << endl;
    cout << "==============================" << endl;
    cout << "1. Nasi goreng informatika : Rp 5.000 " << endl;
    cout << "2. Nasi soto ayam internet : Rp 7.000 " << endl;
    cout << "3. Gado gado Disket        : Rp 4.500 " << endl;
    cout << "4. Bubur ayam LAN          : Rp 4.000 " << endl;
    cout << "==============================" << endl;
    cout<<endl;
    cout << "Masukkan pilihan Anda : ";
    cin >> no;
    cout<<endl;

    switch(no){
        case 1:
        cout<<"1. Nasi goreng informatika : Rp 5.000 ";
        cout<<endl;
      break;
      case 2:
        cout<<"2. Nasi soto ayam internet : Rp 7.000";
        cout<<endl;
      break;
      case 3:
        cout<<"3. Gado gado Disket        : Rp 4.500 ";
        cout<<endl;
      break;
      case 4:
        cout<<"4. Bubur ayam LAN          : Rp 4.000  ";
        cout<<endl;
      break;
      default:
      break;



    }

 return 0;
}
