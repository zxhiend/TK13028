# include <iostream>
using namespace std;

int main(){
    int x = 1;
    int y;

    cout << "Masukkan limit pesan: ";
    cin >> y;
    while (x <= y)
    {
        cout << x << ". Program C++" << endl;
        x++;
    }
}