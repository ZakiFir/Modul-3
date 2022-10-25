#include <stdio.h>
int main(){
    int nilai, sisa, detik, menit, jam, jam2, hari;
    printf("Masukkan Nilai\t= "); 
    scanf("%d", &nilai);
    hari = nilai / 86400;
    sisa = nilai % 86400;
    jam = sisa / 3600;
    jam2= nilai /3600;
    menit = (nilai - (jam2 * 3600))/60;
    detik = nilai % 60;
    if(nilai >= 86400){
        printf("%d hari %d:%d:%d", hari, jam, menit, detik);
    }else if (nilai >= 3600 && nilai <86400){
        printf("%d:%d:%d", jam, menit, detik);
    }else if (nilai > 60 && nilai <3600){
        printf("00:%d:%d", menit, detik);
    }else{
        printf("00:00:%d", detik);
    }
}    