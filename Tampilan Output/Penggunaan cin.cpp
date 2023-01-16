#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
//ini adalah tipe data
char nama[10],alamat[10],telp[10];
int jam,ttl;
clrscr();
//ini kode eksekusinya
cout<<"          Studio Pak Devi          "<<endl;
cout<<"==================================="<<endl;
cout<<"Isi Daftar Penyewa Berikut "<<endl;
//cara memasukan variabel mnggunakan cin>>
cout<<"Nama Group   :";gets(nama);
cout<<"Alamat       :";cin>>alamat;
cout<<"No Telp      :";cin>>telp;
cout<<"==================================="<<endl;
cout<<"Lama Rental  :";cin>>jam;
gotoxy(19,8);cout<<"jam";
ttl=jam*7500;
cout<<"\nTotal Bayar:RP."<<ttl<<endl;
cout<<"==================================="<<endl;
cout<<"\nTY"<<endl;
getch();
//getch berfungsi untuk menahan file supaya tidak terclose langsung
}
