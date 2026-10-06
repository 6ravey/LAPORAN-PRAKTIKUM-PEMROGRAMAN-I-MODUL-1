#include <stdio.h>

int main() {
    int s1 = 4, s2 = 5, s3 = 7;
    int hargaPerMeter = 85000;
    int keliling = s1 + s2 + s3;
    int totalBiaya = keliling * hargaPerMeter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", s1, s2, s3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", hargaPerMeter);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", totalBiaya);

    return 0;
}