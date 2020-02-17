#include <stdio.h>
#include <string.h>

typedef struct ogrenci
{
   char ad[50];
   char soyad[50];
   int numara;
   float notu;
};

ogrenci bilgiDoldur();
void adSoyadYazdir(ogrenci bilgi);
void notNumaraYazdir(ogrenci *bilgi);
void notGuncelle(ogrenci *bilgi);
void numaraGuncelle(ogrenci *bilgi);

int main()
{
    ogrenci ogrenci1;
    ogrenci1 = bilgiDoldur();

    adSoyadYazdir(ogrenci1);
    notNumaraYazdir(&ogrenci1);

    notGuncelle(&ogrenci1);
    notNumaraYazdir(&ogrenci1);

    numaraGuncelle(&ogrenci1);
    notNumaraYazdir(&ogrenci1);
    return 0;
}

ogrenci bilgiDoldur()
{
    ogrenci bilgi;
    strcpy(bilgi.ad, "aaa");    
    strcpy(bilgi.soyad, "bbbbb");    
    bilgi.numara = 55;
    bilgi.notu = 3.5;
return bilgi;
}

void adSoyadYazdir(ogrenci bilgi)
{
    printf("Ogrenci 1 adi : %s \n",bilgi.ad);
    printf("Ogrenci 1 soyadi : %s \n",bilgi.soyad);
}

void notNumaraYazdir(ogrenci *bilgi)
{
    printf("Ogrenci 1 numarasi : %d \n",bilgi->numara);
    printf("Ogrenci 1 notu : %f \n\n",bilgi->notu);
}

void notGuncelle(ogrenci *bilgi)
{
    printf("Not guncelleniyor\n");
    bilgi->notu = 1.2;
}

void numaraGuncelle(ogrenci *bilgi)
{
    printf("Numara guncelleniyor\n");
    bilgi->numara = 111;
}

