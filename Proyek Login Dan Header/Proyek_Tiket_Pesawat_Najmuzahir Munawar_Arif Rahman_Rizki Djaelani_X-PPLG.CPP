#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>
#include<windows.h>
#include<process.h>
#include<fstream.h>
#include "program.h"
#include "header.h"
main()
{
int kelas,jumlah,total,harga,kmb,byr,i,a=0;
char kode[100],nama[100],konfir,np[20],tum;
char pw[15]="arnproject23";
ulang:
progra("HEADER");

cout<<"Nama User:";gets(np);
cout<<"Password :";
for(i=0;i<=12;i++)
{tum=getch();
cout<<"*";
if (tum==pw[i])
{a=a+1;}
}
if((strcmp(np,"Najmuzahir")==0)&&a==12)
{
clrscr();
cout<<"        "<<np<<" Berhasil Login "<<endl;
}
else
{
clrscr();
cout<<" Maaf Anda Gagal Login"<<endl;
a=0;
goto ulang;
}

menu:
clrscr();
program("PROGRAM");
getch();
}
