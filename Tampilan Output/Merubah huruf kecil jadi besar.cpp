#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<ctype.h>
#include<string.h>
main()
{
char kata[20];
clrscr();
cout<<"Masukan Sembarang Kata Dengan Huruf Besar=";
gets(kata);
strlwr(kata);
cout<<"Hasil Perubahan="<<kata;
getch();
}