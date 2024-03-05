#include <stdio.h>

int jarak1, waktu1;
int kecepatan1, waktu2;
int jarak2, kecepatan2;

int main(){
    printf ("masukan jarak & waktu: \n");
    scanf ("%d%d", &jarak1,&waktu1);
    
    printf ("masukan kecepatan & waktu: \n");
    scanf ("%d%d", &kecepatan1,&waktu2);
    
    printf ("masukan jarak & kecepatan: \n");
    scanf ("%d%d", &jarak2,&kecepatan2);

float kecepatan = (float) jarak1/waktu1;
float jarak = (float) kecepatan1*waktu2;
float waktu = (float) jarak2/kecepatan2;

printf ("kecepatannya adalah %f \n", kecepatan);
printf ("jaraknya adalah %f \n", jarak);
printf ("waktunya adalah %f", waktu);
}