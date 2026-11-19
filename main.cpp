#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> antrean;
    int nomor = 0;
    string sedang = "Belum ada";
    int pilih;

    do {
        cout << "\n--- SISTEM ANTREAN LAYANAN ---\n";
        cout << "Sedang dilayani: " << sedang << endl;
        cout << "Sisa antrean: " << antrean.size() << " orang" << endl;
        cout << "1. Ambil Nomor\n2. Panggil Berikutnya\n3. Tampilkan Antrean\n4. Keluar\nPilih: ";
        cin >> pilih;

        if (pilih == 1) {
            nomor++;
            string no = "A" + to_string(nomor);
            antrean.push(no);
            cout << "Nomor kamu: " << no << endl;
        }
        else if (pilih == 2) {
            if (antrean.empty()) { cout << "Antrean kosong!\n"; }
            else { sedang = antrean.front(); antrean.pop(); cout << "Memanggil: " << sedang << endl; }
        }
        else if (pilih == 3) {
            if (antrean.empty()) cout << "Antrean kosong\n";
            else {
                queue<string> tmp = antrean;
                cout << "Antrean: ";
                while (!tmp.empty()) { cout << tmp.front() << " "; tmp.pop(); }
                cout << endl;
            }
        }
    } while (pilih != 4);
    return 0;
}
