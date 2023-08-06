/******************************************************************************

            UAS Stuktur data dan algoritma
            Amirullah Rizqan Majid Airenanta
            NIM 220401010208
            IT-204

*******************************************************************************/

#include <iostream>
#include <string>

struct nama {
    std::string name;
    std::string asal;
};

void bubbleSort(nama arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].name > arr[j + 1].name) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    nama alamat[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };
    int n = sizeof(alamat) / sizeof(alamat[0]);

    std::cout << "List sebelum disort:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << alamat[i].name << " - " << alamat[i].asal << std::endl;
    }

    bubbleSort(alamat, n);

    std::cout << "\nList setelah disort menggunakan Buble Sort:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << alamat[i].name << " - " << alamat[i].asal << std::endl;
    }

    return 0;
}
