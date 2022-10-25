#include <stdio.h>
int main(){
    int nilai;
    printf("Masukkan Nilai : "); 
    scanf("%d", &nilai);
    if (nilai>1){
        printf("positif");
    } else if (nilai<0){
        printf("negatif");
    }else {
        printf("nol");
    }
}