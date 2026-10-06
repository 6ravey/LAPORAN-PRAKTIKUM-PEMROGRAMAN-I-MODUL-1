#include <stdio.h>

int main() {
    int hargaA = 400000;
    int hargaB = 350000;
    
    int akhirA = hargaA - (hargaA * 13 / 100);
    int akhirB = hargaB - (hargaB * 21 / 100);

    printf("Harga sepatu A adalah %d\n", hargaA);
    printf("Harga sepatu B adalah %d\n", hargaB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", akhirA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", akhirB);

    return 0;
}