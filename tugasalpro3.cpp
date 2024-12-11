#include <iostream>
using namespace std;

//fungsi untuk memeriksa tahun tahun kabisat
bool tahunKabisat;

// Fungsi untuk mengonversi Rupiah ke USD
float konversiRupiah;

// Fungsi untuk mengonversi USD ke Rupiah
float konversiUSD;

// Fungsi untuk menghitung BMI
float hitungBMI;

string ketentuanBMI;

int main() {
    system("cls");

    int pilih;
    do {
    cout << "Pilih opsi:\n";
    cout << "[1] tahunKabisat\n";
    cout << "[2] konversiMatauang\n";
    cout << "[3] hitungBmi\n";
    cout << "[4] keluar\n";
    cout << "Pilih opsi (1-4): ";
    cin >> pilih;

    switch (pilih) {
        case 1: {
            int year;
            cout << "Masukkan tahun: ";
            cin >> year;
            if (tahunKabisat(year)) {
            cout << year << " adalah tahun kabisat." << endl;
            } else {
            cout << year << " bukan tahun kabisat." << endl;
            }
            break;
            }
        case 2: {
            int pilihKonversi;
            float rupiah, usd;

            cout << "Pilih konversi:\n";
            cout << "1. Rupiah ke USD\n";
            cout << "2. USD ke Rupiah\n";
            cout << "Pilih opsi (1-2): ";
            cin >> pilihKonversi;
            cout << "Masukkan jumlah uang: ";

            if (pilihKonversi == 1){
            cout << "\nMasukkan jumlah Rupiah: ";
            cin >> rupiah;
            cout << "Hasil konversi ke USD: " << konversiRupiah(rupiah) << endl;
            } else if (pilihKonversi == 2){
            cout << "\nMasukkan jumlah USD: ";
            cin >> usd;
            cout << "Hasil konversi ke Rupiah: " << konversiUSD(usd) << endl;
            } else {
            cout << "Pilihan tidak valid.\n";
            }
            break;
            }
        case 3: {
            float berat, tinggi;
            cout << "Masukkan berat badan (kg): ";
            cin >> berat;
            cout << "Masukkan tinggi badan (m): ";
            cin >> tinggi;
            float bmi = hitungBMI(berat, tinggi);
            cout << "BMI anda " << bmi <<" (" << ketentuanBMI(bmi) << ")" << endl;
            break;
            }
        case 4:
            cout << "Terima kasih! Program selesai." << endl;
            break;
            default:
            cout << "Opsi tidak valid. Silakan pilih lagi." << endl;
            break;
        }
    } while (pilih != 4);

    return 0;
}

bool tahunKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

float konversiRupiah(float idr) {
    return idr / 15000.0; 
}

float konversiUSD(float usd) {
    return usd * 15000.0; 
}

float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi); 
}

string ketentuanBMI(float bmi) {
    if (bmi < 18.5) {
        return "Kurus";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        return "Normal";
    } else if (bmi >= 25 && bmi < 29.9) {
        return "Gemuk";
    } else {
        return "Obesitas";
    }
}

