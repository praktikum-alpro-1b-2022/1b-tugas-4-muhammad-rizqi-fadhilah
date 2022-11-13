#include <iostream>
using namespace std;

    int main (){
        cout << "      == Program Login sederhana ==      " << endl;
        cout << "==========================================\n";
        cout << "Silahkan Login jika ingin mengetahui nya..\n";
        cout << "==========================================\n\n";
    string name, pass;
        cout << "Masukan Username : ";
        cin >> name;
        cout << "Masukan Password : ";
        cin >> pass;

    if (name != "aizenciel" && pass != "shieru123"){
    if (name == "aizenciel" && pass == "shieru123") {
    cout << "usernam sesuai dan password sesuai" << endl;
    }
    else {
    cout << "Username sesuai password tidak" << endl;
    }
    }
    else {
    cout << "Username dan Password tidak sesuai" << endl;
    }

     return 0;

     }
