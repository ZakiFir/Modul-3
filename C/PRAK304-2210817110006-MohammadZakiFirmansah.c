#include <stdio.h>
int main(){
    int nilai;
    printf("Masukkan Nilai = "); 
    scanf("%d", &nilai);
    if(nilai>=100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }else if(nilai>1 && nilai<10){
        printf("Satuan");
    }else if (nilai>9 && nilai<20){
        printf("Belasan");
    }else if(nilai>=20 && nilai<100){
        printf("Puluhan");
    }else {
        printf("Nol");
    }
}