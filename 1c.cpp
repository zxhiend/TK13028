# include <iostream>
using namespace std;

int main(){
    int y;

    string Sentinel;

    cout << "Apakah anda mau cetak? (YA/EXIT): ";
    getline(cin, Sentinel);
    if (Sentinel == "exit" || Sentinel == "EXIT"){
        cout << "Program selesai.";
        return 0;
    } 
    cout << "Masukkan limit output: ";
    cin >> y;
    
    while (Sentinel != "EXIT"){
        for(int i=1; i <= y; i++){
            cout << i << ". Program C++" << endl;
        }
        
        cin.ignore(); // https://stackoverflow.com/questions/25475384/when-and-why-do-i-need-to-use-cin-ignore-in-c
        cout << "Apakah anda mau cetak lagi? (YA/EXIT): ";
        getline(cin, Sentinel);
        if (Sentinel == "YA" || Sentinel == "ya"){
            cout << "Masukkan limit output: ";
            cin >> y;
        }
    }
    cout << "Program selesai." << endl;
    return 0;
    
}


