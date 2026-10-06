#include <stdio.h>

int main() {
    int pasukan = 958730;
    int pahlawan = 5;
    int perPahlawan = pasukan / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d (Zilong, Ling, Baxia, Wanwan, Chang'e)\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", perPahlawan);

    return 0;
}