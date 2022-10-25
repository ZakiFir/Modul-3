#include <stdio.h>
int main(){
    int Angka1, Angka2, Angka3;
    printf("Mengurutkan bilangan dari terkecil ke terbesar\n");
    printf("Angka 1 : ");
    scanf("%d", &Angka1);
    printf("Angka 2 : ");
    scanf("%d", &Angka2);
    printf("Angka 3 : ");
    scanf("%d", &Angka3);
    if(Angka1>Angka2 && Angka1>Angka3 && Angka2>Angka3){
        printf("%d, %d, %d",Angka3, Angka2, Angka1);  
    }else if (Angka2>Angka1 && Angka2>Angka3 && Angka1>Angka3){
        printf("%d, %d, %d",Angka3, Angka1, Angka2);
    }else if (Angka1>Angka2 && Angka1>Angka3 && Angka2<Angka3){
        printf("%d, %d, %d",Angka2, Angka3, Angka1);
    }else if (Angka2>Angka1 && Angka2>Angka3 && Angka1<Angka3){
        printf("%d, %d, %d",Angka1, Angka3, Angka2);
    }else if (Angka3>Angka1 && Angka3>Angka2 && Angka1>Angka2){
        printf("%d, %d, %d",Angka2, Angka1, Angka3);
    }else{
        printf("%d, %d, %d",Angka1, Angka2, Angka3);
    }   
}     