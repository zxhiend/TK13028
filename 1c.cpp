# include <iostream>
using namespace std;

int main(){
    int y;

    string Sentinel;

    cout << "Apakah anda mau cetak? (YA/EXIT): ";

    getline(cin, Sentinel);

    if(Sentinel == "exit" || Sentinel == "EXIT"){
        cout << "Keluar dari program." << endl;
        return 0;
    } else if(Sentinel == "ya" || Sentinel == "YA"){
        cout << "Masukkan limit output: ";
        cin >> y;
        
        for(int i=1; i <= y; i++){
            cout << i << ". Program C++" << endl;
         }

     } else{
        cout << "Input Invalid! Exitting..." << endl;
     }
}


