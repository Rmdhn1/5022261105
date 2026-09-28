#include <stdio.h>
char name[64];
char fav[64];
int age;
char id[11];


int main() {
    printf("Input Nama :");
    scanf("%s", &name);
    printf("Input Makanan/Minum Favorit :");
    scanf("%s", &fav);
    printf("Input Umur :");
    scanf("%d", &age);
    int year = 2026 - age;
    char c1 = fav[0];
    if (c1 >= 'a' && c1 <= 'z') c1 -= 32;
    char c2 = fav[1];
    if (c2 >= 'a' && c2 <= 'z') c2 -= 32;
    snprintf(id, sizeof(id), "%.2s%d%d%d", name, year, (int)c1, (int)c2);
    printf("//////////////////////////////////////");
    printf("\n TUGAS M. H. Romadhoni - 5022261105");
    printf("\n //////////////////////////////////////");
    printf("\n ID UNIK: %s", id);
    printf("\n Makan/Minum favorit: %s", fav);
    printf("\n Umur: %d", age);
    return 0;
}