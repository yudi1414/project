#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// definisi struct untuk absensi karyawan
struct Absensi {
    string nama;
    time_t jamMasuk;
    time_t jamPulang;
};

int main() {
    // deklarasi variabel dan array
    int jumlahKaryawan;
    cout << "Masukkan jumlah karyawan: ";
    cin >> jumlahKaryawan;
    Absensi absensi[jumlahKaryawan];

    // input data absensi karyawan
    for (int i = 0; i < jumlahKaryawan; i++) {
        cout << "Karyawan #" << i+1 << endl;
        cout << "Nama: ";
        cin >> absensi[i].nama;

        // input jam masuk
        time_t now = time(0);
        struct tm* waktuMasuk = localtime(&now);
        absensi[i].jamMasuk = mktime(waktuMasuk);
        cout << "Jam masuk: " << asctime(waktuMasuk);

        // input jam pulang
        struct tm* waktuPulang = localtime(&now);
        absensi[i].jamPulang = mktime(waktuPulang);
        cout << "Jam pulang: " << asctime(waktuPulang);

        cout << endl;
    }

    // output data absensi karyawan
    for (int i = 0; i < jumlahKaryawan; i++) {
        cout << "Karyawan #" << i+1 << endl;
        cout << "Nama: " << absensi[i].nama << endl;
        cout << "Jam masuk: " << asctime(localtime(&absensi[i].jamMasuk));
        cout << "Jam pulang: " << asctime(localtime(&absensi[i].jamPulang));
        cout << endl;
    }

    return 0;
}
