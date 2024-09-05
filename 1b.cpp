# include <iostream>
using namespace std;

int x = 1;
int y;
int main(){
    cout << "Masukkan limit pesan: ";
    cin >> y;
    while (x <= y)
    {
        cout << x << ". Program C++" << endl;
        x++;
    }
}