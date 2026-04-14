/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 - Overview C Language
 *   Hari dan Tanggal    : Selasa, 17 April 2026
 *   Nama (NIM)          : Marcello Menata Pandiangan (13224069)
 *   Nama File           : soal1.c
 *   Deskripsi           : Menara Lampu dimana cetak warna berdasarkan aturan prioritas tertentu
 * 
 */


 #include <stdio.h>
 #include <string.h>
  
 int main() {
    int tingkatan_angka;
    scanf("%d", &tingkatan_angka);
    for (int i = 1; i <= tingkatan_angka; i++){
        if (i % 2 == 0 && i % 3 == 0){
            printf("BIRU\n");}
        else if (i % 3 == 0){
            printf("MERAH\n");}
        else if (i % 2 == 0){
            printf("KUNING\n");}
        else if (i >= 10 && i %2== 0){
            printf("%d\n", i);}
        else
            printf("%d\n", i);
    }
  
    return (0);
 }
 
