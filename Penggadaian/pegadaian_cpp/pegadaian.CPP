/*
  Pembuat    : Devi Rodiana, S.T.
  Nis	       : 2022123456
  Email      : idevroedi@gmail.com
  Kontak     : 083256894
  Pembimbing : ........................
  Diajukan   : Tugas Akhir Dasar Pemrograman PPLG
  user,password (idev,manggacobian)
*/
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream.h>
#include <time.h>
#include "head.h"
#include "kepesertaan.h"

main(){
	char kode[20],u[10],p[50],lk,pilih_menu,notif[20]="";
   login:
   head("LOGIN APLIKASI");
   cout<<notif;
   strcpy(notif,"");
   cout<<"Silahkan Login Untuk Memulai APP!"<<endl;
   cout<<"Username  : ";gets(u);
   cout<<"Password  : ";

   char str [100]="abcdefghijklmnopqrstuvwxyz1234567890";
	char karakter;
   for(int a=0;a<50;a++){
   	karakter=getch();
      if(karakter=='\r'){
			p[a]=NULL;break;
		}else if(karakter=='\b'){
			if(a!=0)
         cout<<"\b \b";
			p[a]=NULL;
			p[a-1]=NULL;
			a-=2;

         if(a<-1)a=-1;
         continue;
		}else if(strchr(strupr(str),karakter)-str<=35&&strchr(strupr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else if(strchr(strlwr(str),karakter)-str<=35&&strchr(strlwr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else{
         if(a>0){
           a-=1;
         }
      }
	}

   if((strcmp(u,"idev")==0)&&(strcmp(p,"manggacobian")==0)){
      clrscr();
      goto menu;
   }else{
      clrscr();
      strcpy(notif,"Login Gagal!!!\n");
      goto login;
   }
   menu:
   clrscr();
   head("MENU PEGADAIAN");
   cout<<notif;
   strcpy(notif,"");
   cout<<"Selamat Datang "<<u<<"!!"<<endl;
   cout<<"Silahkan pilih Menu Aplikasi Pegadaian Syariah"<<endl;
   cout<<"1. Kepesertaan Pegadaian Syariah"<<endl;
   cout<<"0. Logout"<<endl;
   cout<<"Menu pilihan anda adalah : ";cin>>pilih_menu;
   if(pilih_menu=='0'){
   	goto akhir;
   }else if(pilih_menu=='1'){
   	clrscr();
   	peserta();
      goto menu;
   }else{
   	strcpy(notif,"Menu tidak tersedia!!\n");
      goto menu;
   }
   akhir:
   clrscr();
   head("LOGOUT APLIKASI");
   cout<<"Logout berhasil!!"<<endl;
   cout<<"Ingin login kembali??? [Y/y] : ";cin>>lk;
   if(lk=='Y'||lk=='y'){
   	clrscr();
   	goto login;
   }
   cout<<"Sampai Jumpa!!"<<endl;
   getch();
}
