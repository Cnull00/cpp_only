#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    // Deklarasi variabel
    string merk, model;
    double harga, dp, bunga, sisaPokok, bungaBulanan, sisaPokokBunga, angsuran;
    int tenor;

    // Input data
    cout << "Merk\t\t: ";
    getline(cin, merk);
    cout << "Model\t\t: ";
    getline(cin, model);
    cout << "Harga\t\t: ";
    cin >> harga;
    cout << "DP/Uang Muka\t: ";
    cin >> dp;
    cout << "Bunga %\t\t: ";
    cin >> bunga;
    cout << "Tenor (Bulan)\t: ";
    cin >> tenor;

    // Menghitung sisa pokok
    sisaPokok = harga - dp;

    // Menampilkan header tabel
    cout << "\n--------------------------------------------------------\n";
    cout << setw(10) << "Bulan" << setw(15) << "Sisa Pokok" << setw(15) << "Bunga" << setw(20) << "Sisa Pokok + Bunga" << setw(15) << "Angsuran" << endl;
    cout << "--------------------------------------------------------\n";

    // Perulangan untuk setiap bulan
    for (int i = 1; i <= tenor; ++i) {
        // Menghitung bunga bulanan
        bungaBulanan = (sisaPokok * bunga) / 100;

        // Menghitung sisa pokok + bunga
        sisaPokokBunga = sisaPokok + bungaBulanan;

        // Menghitung angsuran
        angsuran = sisaPokokBunga / tenor;

        // Menampilkan hasil perhitungan
        cout << setw(10) << i << setw(15) << fixed << setprecision(2) << sisaPokok << setw(15) << bungaBulanan << setw(20) << sisaPokokBunga << setw(15) << angsuran << endl;

        // Mengupdate sisa pokok untuk bulan berikutnya
        sisaPokok -= angsuran;
    }

    cout << "--------------------------------------------------------\n";
    cout << "Kode by Zaky Arifaldi.R NMP:112311007\n";
    return 0;
}
//Kode by Zaky Arifaldi.R NMP:112311007
