#include <iostream>
#include <stdio.h>

using namespace std;

void luasSegitiga()
{
    int alas,tinggi,hasil;
    cout<<"Masukkan Alas : ";
    cin>>alas;
    cout<<"Masukkan Tinggi : ";
    cin>>tinggi;

    hasil = (alas*tinggi)/2;

    cout<<"Hasil Dari Perhitungan Luas Segitiga"<<endl;
    cout<<"Alas :"<<alas<<"Cm"<<endl;
    cout<<"Tinggi : "<<tinggi<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm^2"<<endl;
}

void luasPersegiPanjang()
{
    int panjang,lebar,hasil;
    cout<<"Masukkan Panjang : ";
    cin>>panjang;
    cout<<"Masukkan Lebar : ";
    cin>>lebar;

    hasil = panjang * lebar;

    cout<<"Hasil Dari Perhitungan Luas Persegi Panjang"<<endl;
    cout<<"Alas :"<<panjang<<"Cm"<<endl;
    cout<<"lebar : "<<lebar<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm"<<endl;
}

void luasLingkaran()
{
    int jari,hasil;
    float phi = 3.14;
    cout<<"Masukkan Jari - Jari: ";
    cin>>jari;

    hasil =phi*jari*jari;

    cout<<"Hasil Dari Perhitungan Luas Lingkaran"<<endl;
    cout<<"Jari - Jari :"<<jari<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm"<<endl;
}

void luasPersegi()
{
    int sisi,hasil;
    cout<<"Masukkan sisi: ";
    cin>>sisi;

    hasil = sisi*sisi;

    cout<<"Hasil Dari Perhitungan Luas Persegi"<<endl;
    cout<<"Jari - Jari :"<<sisi<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm"<<endl;
}

void volumeKerucut()
{
    int jari,tinggi,hasil;
    float phi = 3.14;

    cout<<"Masukkan Jari : ";
    cin>>jari;
    cout<<"Masukkan Tinggi : ";
    cin>>tinggi;

    hasil = (phi*jari*jari*tinggi)/3;

    cout<<"Hasil Dari Perhitungan Volume Kerucut"<<endl;
    cout<<"Jari - Jari :"<<jari<<"Cm"<<endl;
    cout<<"Tinggi :"<<tinggi<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm"<<endl;
}

void volumeTabung()
{
    int jari,tinggi,hasil;
    float phi = 3.14;

    cout<<"Masukkan Jari : ";
    cin>>jari;
    cout<<"Masukkan Tinggi : ";
    cin>>tinggi;

    hasil = phi*jari*jari*tinggi;

    cout<<"Hasil Dari Perhitungan Volume Tabung"<<endl;
    cout<<"Jari - Jari :"<<jari<<"Cm"<<endl;
    cout<<"Tinggi :"<<tinggi<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm"<<endl;

}

void volumeKubus()
{
    int sisi,hasil;

    cout<<"Masukkan Sisi : ";
    cin>>sisi;

    hasil = sisi*sisi*sisi;

    cout<<"Hasil Dari Perhitungan Volume Kubus"<<endl;
    cout<<"Sisi :"<<sisi<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm"<<endl;
}

void volumeBalok()
{
    int panjang,lebar,tinggi,hasil;

    cout<<"Masukkan Panjang : ";
    cin>>panjang;
    cout<<"Masukkan Lebar : ";
    cin>>lebar;
    cout<<"Masukkan Tinggi : ";
    cin>>tinggi;

    hasil = panjang*lebar*tinggi;

    cout<<"Hasil Dari Perhitungan Volume Balok"<<endl;
    cout<<"panjang :"<<panjang<<"Cm"<<endl;
    cout<<"Lebar :"<<lebar<<"Cm"<<endl;
    cout<<"Tinggi :"<<tinggi<<"Cm"<<endl;
    cout<<"Hasil : "<<hasil<<"Cm"<<endl;
}

void Interface()
{
    int input;
    
    cout<<"Menu Penghitungan "<<endl;
    cout<<"1. Segitiga"<<endl;
    cout<<"2. Persegi Panjang"<<endl;
    cout<<"3. Lingkaran"<<endl;
    cout<<"4. Persegi"<<endl;
    cout<<"5. Kerucut"<<endl;
    cout<<"6. Tabung"<<endl;
    cout<<"7. Kubus"<<endl;
    cout<<"8. Balok"<<endl;
    cout<<"Masukkan Angka : ";
    cin>>input;

    switch (input)
    {
        case 1 :
            luasSegitiga();
            break;
        case 2 :
            luasPersegiPanjang();
            break;
        case 3 :
            luasLingkaran();
            break;
        case 4 :
            luasPersegi();
            break;
        case 5 :
            volumeKerucut();
            break;
        case 6 :
            volumeTabung();
            break;
        case 7 :
            volumeKubus();
            break;
        case 8 :
            volumeBalok();
            break;
    }
}

main()
{
    char quit = 'y';
    while(quit == 'y')
    {
        cout<<"Selamat Datang Di Program Menghitung Luas Bangun Datar Dan Volume Bangun Ruang"<<endl;
        Interface();
        cout<<"apakah anda ingin melanjutkan (y/n): "<<endl;
        cin>>quit;
    }

    cout<<"Program Telah Selesai"<<endl;
    cout<<"Anda Akan Keluar Dari Program"<<endl;
}