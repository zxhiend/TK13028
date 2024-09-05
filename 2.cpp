# include <iostream>
using namespace std;

int main(){
    int jumlah_siswa, nilai_akhir, lulus, perbaikan, tidak_lulus;
    lulus = 0;
    perbaikan = 0;
    tidak_lulus = 0;

    cout << "Masukkan Jumlah Siswa: ";
    cin >> jumlah_siswa;

    for (int i = 1; i <= jumlah_siswa; i++){
        cout << "Nilai siswa ke-" << i << ": ";
        cin >> nilai_akhir;

        if (nilai_akhir >= 70){
            cout << "Keterangan: LULUS" << endl;
            lulus++;
        } else if (nilai_akhir >= 50 || nilai_akhir < 70){
            cout << "Keterangan: TES PERBAIKAN" << endl;
            perbaikan++;
        } else{
            cout << "Keterangan: TIDAK LULUS" << endl;
            tidak_lulus++;
        } 
    }

    cout << "\nJumlah siswa yang LULUS: " << lulus << endl;
    cout << "Jumlah siswa yang harus TES PERBAIKAN: " << perbaikan << endl;
    cout << "Jumlah siswa yang TIDAK LULUS: " << tidak_lulus << endl;
}


