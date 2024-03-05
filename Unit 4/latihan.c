#include <stdio.h>

int sisi,keliling,luas,volume;

void hitungkeliling(int sisi) {
    keliling = sisi*4;
    printf ("Keliling persegi = %d \n", keliling);
}
void hitungluas(int sisi) {
    luas = sisi*sisi;
    printf ("Luas persegi = %d \n", luas);
}
void hitungvolume(int sisi) {
    volume = sisi*sisi*sisi;
    printf ("Volume kubus = %d\n", volume );
}

int main () {
    printf ("Masukkan nilai sisi= ");
    scanf ("%d", &sisi);

    hitungkeliling(sisi);
    hitungluas(sisi);
    hitungvolume(sisi);

    return 0;
}