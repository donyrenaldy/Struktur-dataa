#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int m=1,n=1;
int nh1,nh2,nh3;
int cari;
int jum;



struct Mahasiswa
{
    string nama;
    int nim;
    char jk;
    string jurusan;
    float rata;
}mhs[99];


void tambah_mhs(Mahasiswa)
{
        cout<<endl;
        cout<<"=================== "<<endl;
        cout<<"Masukkan nama Mahasiswa : ";cin>>mhs[m].nama;
        cout<<"Masukkan Nomor Induk Mahasiswa : ";cin>>mhs[m].nim;
        cout<<"Masukkan Jenis kelamin  (L/P): ";cin>>mhs[m].jk;
        cout<<"Masukkan Jurusan: ";cin>>mhs[m].jurusan;
        cout<<"Masukkan nilai 1: ";cin>>nh1;
        cout<<"Masukkan nilai 2: ";cin>>nh2;
        cout<<"Masukkan nilai 3: ";cin>>nh3;
        cout<<"=================== "<<endl;

      jum=nh1+nh2+nh3;
      mhs[m].rata=jum/3;
}
void cari_data(Mahasiswa){
    int plh;
            cout<<"Masukkan NIM yang akan dicari= ";cin>>plh;
    if(plh==mhs[m].nim){
            cout<<"NIM :"<<mhs[m].nim<<endl;
            cout<<"Nama :"<<mhs[m].nama<<endl;
            cout<<"Jurusan :"<<mhs[m].jurusan<<endl;
            cout<<"Jenis Kelamin :"<<mhs[m].jk<<endl;
            cout<<"Nilai Harian1 :"<<nh1<<endl;
            cout<<"Nilai Harian2 :"<<nh2<<endl;
            cout<<"nilai Harian3"<<nh3<<endl;

    }
    else if(plh!=mhs[m].nim){
            cout<<"data tidak ditemukan"<<endl;
    }
    m++;
}


void rata_mhs(Mahasiswa)
{
    cout<<endl;
    cout<<"================= "<<endl;
    cout<<"Nilai Rata rata Tertinggi"<<endl;
    cout<<mhs[m].rata<<endl;
    cout<<endl;
    cout<<"================="<<endl;
    system("pause");
}


int main(){
    int pilih=0;
    do {system ("cls");
        cout<<"Daftar menu : "<<endl;
        cout<<"1. Input data Mahasiswa"<<endl;
        cout<<"2. tampil berdasarkan  Nilai "<<endl;
        cout<<"3. pencarian berdasar NIM"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"================"<<endl;
    cout<<"Pilih menu: ";cin>>pilih;
    switch(pilih)
    {   case 1:{if(n==10){cout<<"Kelas sudah penuh"<<endl;} else{tambah_mhs(mhs[99]);};break;}
        case 2:{if(n==10){cout<<"Kelas sudah penuh"<<endl;} else{rata_mhs(mhs[99]);};break;}
        case 3:{if(n==10){cout<<"Kelas sudah penuh"<<endl;} else{cari_data(mhs[99]);};break;}
        case 0:{cout<<"terimakasih "<<endl;break;}
        default:cout<<"menu yang anda pilih salah "<<endl;
         }
    system("pause");
    }
    while(pilih!=0);

}
