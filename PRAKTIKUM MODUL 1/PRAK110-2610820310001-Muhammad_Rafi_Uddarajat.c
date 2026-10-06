#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;      // Sisi C
    int tinggi = 12;   // Sisi A
    
    int sisiA = tinggi;
    int sisiC = alas;
    int sisiB = sqrt((sisiA * sisiA) + (sisiC * sisiC)); // Sisi Miring
    
    int keliling = sisiA + sisiB + sisiC;
    int luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisiA);
    printf("Sisi B = %d cm\n", sisiB);
    printf("Sisi C = %d cm\n", sisiC);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}