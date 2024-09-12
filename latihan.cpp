#include <iostream>
using namespace std;

int faktorial(int d){
    if (d>1){
        return d*faktorial(d-1);
    } else {
        return 1;
    }
}

void pertambahan(){
    int x,y,z;
    cout << "Input angka pertama: ";
    cin >> x;
    cout << "Input angka kedua: ";
    cin >> y;
    z=x+y;
    cout << x << " + "  << y << " = " << z << endl;
}

void rataRata(){
    double x, y, z, hasil;
    cout << "Masukkan nilai pertama: ";
    cin >> x;
    cout << "Masukkan nilai kedua: ";
    cin >> y;
    cout << "Masukkan nilai pertama: ";
    cin >> z;
    hasil = (x+y+z)/3;
    cout << "Nilai rata-rata dari ketiga nilai adalah: " << hasil << endl;;
}

bool validation(){
    string usr, pass;
    
    cout << "Username: ";
    getline(cin, usr);
    cout << "Passsword: ";
    getline(cin, pass);
    
    if (usr == "Faiz" && pass == "Izfa"){
        cout << "Selamat datang " << usr << "!" << endl;
        return true;
    } else{
        cout << "Username atau Password salah!";
        return false;
    }
}

void pilihan(){
    int input;
    cout << "Pilih menu:\n1. Faktorial\n2. Pertambahan\n3. Rata-rata\nInput: ";
        cin >> input;
        switch(input){
            case 1:
                int angkaFaktor;
                cout << "Input angka untuk difaktorkan: ";
                cin >> angkaFaktor;
                cout << "Hasil faktor dari angka " << angkaFaktor << " adalah: " << faktorial(angkaFaktor);
                cout << "Program selesai! Logging out...";
                break;
            case 2:
                pertambahan();
                break;
                cout << "Program selesai! Logging out...";
            case 3:
                rataRata();
                break;
                cout << "Program selesai! Logging out...";
            default:
                cout << "Menu tidak ditemukan!\nProgram dihentikan.";
        }
          
}

int main(){
    bool val = validation();
    
    if(val){
        pilihan();
    }
    
    
}