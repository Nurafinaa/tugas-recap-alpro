#include <stdio.h>

int elemen, i, total = 0;

int main () {
    printf ("Masukkan jumlah elemen yang ingin dimasukkan dalam array = ");
    scanf ("%d", &elemen);

    int array[elemen];

    printf ("Masukkan nilai tiap elemen : \n");
    for (i=0;i<elemen;i++) {
        printf ("Elemen ke-%d= ", i + 1);
        scanf ("%d", &array[i]);
    }

    for (i=0;i < elemen;i++) {
        total += array[i];
    }

    printf ("Hasil penjumlahan seluruh elemen pada array = %d", total);
    return 0;
}

