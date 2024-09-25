#include <iostream>
using namespace std;

const int rows = 15;  // Total baris
const int cols = 6;   // Total kolom (A-F)

// Fungsi untuk mencetak denah kursi
void printSeats(char seats[rows][cols]) {
    char colLabel[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    for (int i = 0; i < cols; i++) {
        cout << "\t" << colLabel[i];
    }
    cout << endl;

    for (int i = 0; i < rows; i++) {
        cout << "Baris " << i + 1 << "\t";
        for (int j = 0; j < cols; j++) {
            cout << seats[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi untuk memeriksa ketersediaan kursi
bool isAvailable(char seats[rows][cols], int row, char col) {
    int colIndex = col - 'A';  // Konversi huruf kolom menjadi index
    return seats[row][colIndex] == '*';
}

// Fungsi untuk memesan kursi
void bookSeat(char seats[rows][cols], int row, char col) {
    int colIndex = col - 'A';
    seats[row][colIndex] = 'X';  // Tandai kursi dengan 'X' sebagai sudah dipesan
}

int main() {
    // Inisialisasi denah kursi
    char seats[rows][cols] = {
        {'X', 'X', '*', '*', '*', '*'},
        {'*', '*', '*', 'X', 'X', '*'},
        {'*', '*', 'X', 'X', '*', '*'},
        {'*', '*', 'X', 'X', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', 'X', 'X', 'X'},
        {'*', '*', 'X', '*', '*', '*'},
        {'*', '*', 'X', '*', '*', '*'},
        {'X', 'X', '*', '*', '*', 'X'},
        {'*', '*', '*', '*', 'X', 'X'},
        {'*', '*', 'X', 'X', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', 'X', 'X'},
        {'*', '*', '*', '*', 'X', '*'},
        {'X', 'X', 'X', '*', 'X', '*'}
    };

    int classChoice, row;
    char col;

    cout << "Pilih kelas tempat duduk:\n";
    cout << "1. Kelas Utama (Baris 1-2)\n";
    cout << "2. Kelas Bisnis (Baris 3-5)\n";
    cout << "3. Kelas Ekonomi (Baris 6-15)\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> classChoice;

    // Tentukan rentang baris berdasarkan pilihan kelas
    int minRow, maxRow;
    switch (classChoice) {
        case 1:
            minRow = 1;
            maxRow = 2;
            break;
        case 2:
            minRow = 3;
            maxRow = 5;
            break;
        case 3:
            minRow = 6;
            maxRow = 15;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 1;
    }

    cout << "Masukkan nomor baris (1-" << rows << "): ";
    cin >> row;

    if (row < minRow || row > maxRow) {
        cout << "Baris yang Anda pilih tidak sesuai dengan kelas yang dipilih!" << endl;
        return 1;
    }

    cout << "Masukkan kolom tempat duduk (A-F): ";
    cin >> col;

    if (isAvailable(seats, row - 1, col)) {
        bookSeat(seats, row - 1, col);
        cout << "Kursi berhasil dipesan!\n";
    } else {
        cout << "Kursi sudah dipesan oleh orang lain.\n";
    }

    // Tampilkan denah kursi setelah pemesanan
    printSeats(seats);

    return 0;
}
