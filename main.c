/*EL2208 Praktikum Pemecahan Masalah dengan C 2023/2024
*Modul            : 1
*Hari dan Tanggal : Jumat, 1 Maret 2024
*Nama (NIM)       : Naufal Afiq Muzaffar (13222025)
*Asisten (NIM)    : M. Rafli (18321012)
*Nama File        : main.c
*Deskripsi        : Program digunakan untuk menampilkan deret bilangan bulat, 
                    prima, dan fibonacci sesuai dengan input pengguna
*/

// Meneyediakan opeasi sederhana berupa input dan output juga operasi perbandingan
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Inisialisasi variabel
    int jenismenu;
    int batasawal=0;
    int batasakhir=1;
    int i,j;
    int kondisi=0;
    
    printf("PROGRAM BILANGAN\n");
    printf("1. Bilangan Bulat\n");
    printf("2. Bilangan Prima\n");
    printf("3. Bilangan Fibonacci\n");
    printf("4. Exit\n\n");

    // Berjalan jika menu yang dimasukan bukan Exit ataupun angka input salah 
    while (kondisi != 1 ){

        printf("Masukkan jenis bilangan yang diinginkan: ");
        scanf("%d", &jenismenu);

        // Menu Exit
        if (jenismenu==4){
            kondisi=1;
        }
        
        // Menerima input rentang bilangan jika masukan menu valid
        if ((jenismenu>=1 && jenismenu <=3)){
            printf("\nMasukkan bilangan awal: ");
            scanf("%d", &batasawal);
            printf("Masukkan bilangan akhir: ");
            scanf("%d", &batasakhir);
        }

        // Menampilkan pesan salah jika input tidak valid
        if (jenismenu > 4 || jenismenu <1 || (batasakhir-batasawal < 0)){
            printf("\nInput pada program salah!\n\n");
        }

        else{

            // Masuk ke menu bilangan bulat
            if (jenismenu==1){
                printf("\nDeret Bilangan Bulat\n\n");
                // Menampilkan output bilangan bulat dari bilangan awal sampai bilangan akhir
                for (i=batasawal; i<batasakhir+1; i++){
                    printf("%d ",i);
                }
                i=0;
                printf("\n\n");
            }
            
            // Masuk ke menu bilangan prima
            // if (jenismenu==2){
            //     int cekprima =0;
            //     printf("\nDeret Bilangan Prima\n\n");
            //     // Mengecek satu per satu setiap bilangan apakah memiliki lebih dari 1 faktor atau tidak
            //     for (i=batasawal; i<batasakhir+1; i++){
            //         for (j=2; j<(i+1); j++){
            //             if ((i%j)==0){
            //                 cekprima +=1;
            //             }
            //         }
            //         if (cekprima == 1){
            //             printf("%d ",i);
            //         }
            //         cekprima=0;
            //     }
            //     printf("\n\n");
            //     i=j=0;
            // }
            
            // Masuk ke menu bilangan fibonachi
            if (jenismenu==3){
                int bil1 = 0;
                int bil2 = 1;
                int bilfib;
                printf("\nDeret Bilangan Fibonacci\n\n");
                // Mendapatkan angka saat ini dari penjumlahan 2 bilangan sebelumnya
                for (i=0; i<(batasakhir); i++){
                    if (batasawal ==1 && i==0){
                        printf("1 ");
                    }
                    bilfib = bil1 + bil2;
                    bil1 = bil2;
                    bil2 = bilfib;
                    if (bilfib >= batasawal && bilfib <= batasakhir){
                        printf("%d ", bilfib);
                    }
                }
                printf("\n\n");
            }
        }
    }
    printf("\nProgram selesai");
    return 0;
}