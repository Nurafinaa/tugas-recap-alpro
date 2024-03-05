#include <stdio.h>

    int jumlah_transaksi;
    int total_pengeluaran = 0;

int main() {

    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlah_transaksi);

    int total_pengeluaran = 0;
    printf("Masukkan nominal transaksi:\n");
    for (int i = 0; i < jumlah_transaksi; i++) {
        int nominal;
        scanf("%d", &nominal);
        total_pengeluaran += nominal;
    }

    if (jumlah_transaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
    } else {
        printf("Total pengeluaran hari ini: %d\n", total_pengeluaran);
    }

    return 0;
}