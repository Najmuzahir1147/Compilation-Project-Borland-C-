/*
  Pembuat    : Risky Kurniawan
  Nim        : 16180001
  Email      : Riskykurniawan@programmer.net / Riskykurniawan15@gmail.com
  Kontak     : 083826114233
  Pembimbing : Salman Topiq S.Kom, M.Kom
  Diajukan   : Tugas Akhir Dasar Pemrograman
*/
#include "barang.h"
typedef struct datapengajuan{
	int kodepengajuan;
   char namapengajuan[100];
   int angsuran;
} datapengajuan;

jumlahpengajuan(char kp[20]=""){
	ifstream baca; // membaca
   datapengajuan kpst;
   char file[50]="Pengajuan_";
   strcat(file,kp);
   strcat(file,".db");
	baca.open(file, ios::binary);
   int j=1;
		while(baca.read((char *) &kpst, sizeof(kpst)))
      {
      	j++;
      }
      baca.close();
   return j;
}

inputpengajuan(char kp[20]=""){
	datapengajuan kpst;
   ofstream tulis; // menulis
   char file[50]="Pengajuan_",pilih_menu;
   strcat(file,kp);
   strcat(file,".db");
	tulis.open(file, ios::binary | ios::app);
   	cout<<"Input Pengajuan Pegadaian Syariah"<<endl;
   	cout<<"Kode Pengajuan  : "<<jumlahpengajuan(kp)<<" (auto)"<<endl;
      kpst.kodepengajuan=jumlahpengajuan(kp);
      cout<<"Nama Pengajuan  : ";gets(kpst.namapengajuan);
   	cout<<"Jumlah Angsuran :(Warning Data Tidak Dapat Diubah!!!)"<<endl;
      cout<<"1. 4X Angsuran"<<endl;
   	cout<<"2. 8X Angsuran"<<endl;
   	cout<<"3. 12X Angsuran"<<endl;
      cout<<"4. 16X Angsuran"<<endl;
      ulang:
   	cout<<"Menu pilihan anda adalah : ";cin>>pilih_menu;
      if(pilih_menu=='1'){
      	kpst.angsuran=4;
      }else if(pilih_menu=='2'){
         kpst.angsuran=8;
      }else if(pilih_menu=='3'){
         kpst.angsuran=12;
      }else if(pilih_menu=='4'){
         kpst.angsuran=16;
      }else{
      	cout<<"Angsuran tidak terdaftar"<<endl;
         cout<<"Silahkan Ketik Ulang ";
         goto ulang;
      }
   	tulis.write((char *) &kpst, sizeof(kpst)); // menulis ke file
    	tulis.close();
}

tampilpengajuan(char kp[20]="",char nama[50]=""){
	ifstream baca; // membaca
   datapengajuan kpst;
    int j1,j2,j3,jak;
   	  j1=1;j2=9;j3=17;jak=11;
    head("DATA PENGAJUAN");
    cout<<"Kode Peserta : "<<kp<<endl;
    cout<<"Nama Peserta : "<<nama<<endl;
    char file[50]="Pengajuan_";
   	strcat(file,kp);
   	strcat(file,".db");
		baca.open(file, ios::binary);
    		while(baca.read((char *) &kpst, sizeof(kpst)))
    		{
         	if(j3-3<strlen(kpst.namapengajuan)){
            	j3=strlen(kpst.namapengajuan)+3;
            }
    		}
    		baca.close();
         j2=j2+j1;
         j3=j3+j2;
         jak=jak+j3;
   	garis(jak);
         gotoxy(j1,wherey());cout<<"| Kode ";
   		gotoxy(j2,wherey());cout<<"| Nama Pengajuan";
         gotoxy(j3,wherey());cout<<"| Angsuran";
         gotoxy(jak,wherey());cout<<" |";
         cout<<endl;
      garis(jak);
      	baca.open(file, ios::binary);
   		int j=1;
 	  		while(baca.read((char *) &kpst, sizeof(kpst)))
         {
         		gotoxy(j1,wherey());cout<<"| "<<kpst.kodepengajuan;
   				gotoxy(j2,wherey());cout<<"| "<<kpst.namapengajuan;
               gotoxy(j3,wherey());cout<<"| "<<kpst.angsuran<<"X";
   				gotoxy(jak,wherey());cout<<" |";
   				cout<<endl;
               j++;
         }
         baca.close();
         if(j==1){
            gotoxy(1,wherey());cout<<"\tData Masih Kosong"<<endl;
         }
         garis(jak);cout<<endl;
}

editpengajuan(char kp[20]=""){
   ofstream tulis; // menulis
   ifstream baca; // membaca
   datapengajuan kpst;
   char file[50]="Pengajuan_",kode[10]="";
   strcat(file,kp);
   strcat(file,".db");
   cout<<"Masukan Kode Pengajuan : ";cin>>kode;
      	baca.open(file, ios::binary);

 			tulis.open("tmp.db", ios::out|ios::binary);

      	int ketemu = 0;

 			while(baca.read((char*) &kpst, sizeof(kpst))){
  				if(kpst.kodepengajuan != atoi(kode)){
   				tulis.write((char*)&kpst, sizeof(kpst));
  				}else{
            	if(ketemu == 0){
            		ketemu=1;
               	cout<<"edit Pengajuan Peserta Pegadaian Syariah ::Kode Peserta: <<"<<kp<<">> ::"<<endl;
      				cout<<"Nama Pengajuan  : ";gets(kpst.namapengajuan);
						tulis.write((char *) &kpst, sizeof(kpst));
            	}
         	}
         }

 			baca.close();
 			tulis.close();

 			remove(file);
 			rename("tmp.db", file);
         if (ketemu ==1) {
  				cout<<"Edit Berhasil";
 			}else{
  				cout<<"Edit gagal";
 			}
         getch();
}

char *cekpengajuan(char kp[20]="",char kode[20]=""){
   ifstream baca; // membaca
   datapengajuan kpst;
      	char file[50]="Pengajuan_";
   		strcat(file,kp);
   		strcat(file,".db");
   		baca.open(file, ios::binary);

			char ketemu[50] = "kosong";

 			while(baca.read((char*) &kpst, sizeof(kpst))){
  				if(kpst.kodepengajuan == atoi(kode)){
               strcpy(ketemu,kpst.namapengajuan);
  				}
 			}
 			baca.close();

         return ketemu;

}

cekangsuran(char kp[20]="",char kode[20]=""){
   ifstream baca; // membaca
   datapengajuan kpst;
      	char file[50]="Pengajuan_";
   		strcat(file,kp);
   		strcat(file,".db");
   		baca.open(file, ios::binary);

			int ang = 0;

 			while(baca.read((char*) &kpst, sizeof(kpst))){
  				if(kpst.kodepengajuan == atoi(kode)){
               ang=kpst.angsuran;
  				}
 			}
 			baca.close();

         return ang;

}

pengajuangadai(char kp[20]="",char nama[50]=""){
   menu:
   clrscr();
   char pilih_menu,notif[50];
   tampilpengajuan(kp,nama);
   cout<<notif;
   strcpy(notif,"");
   cout<<"1. Input Data Pengajuan"<<endl;
   cout<<"2. Edit Data Pengajuan"<<endl;
   cout<<"3. Detail Pengajuan"<<endl;
   cout<<"0. Kembali"<<endl;
   cout<<"Menu pilihan anda adalah : ";cin>>pilih_menu;
   if(pilih_menu=='0'){
   	clrscr();
   }else if(pilih_menu=='1'){
      clrscr();
      tampilpengajuan(kp,nama);
      inputpengajuan(kp);
      goto menu;
   }else if(pilih_menu=='2'){
      clrscr();
      tampilpengajuan(kp,nama);
      editpengajuan(kp);
      goto menu;
   }else if(pilih_menu=='3'){
   	char kodenya[20];
   	cout<<"Masukan Kode Pengajuan   : ";cin>>kodenya;
      if(strcmp(cekpengajuan(kp,kodenya),"kosong")!=0){
         char n[200]="",kodepeng[50]="";
         strcpy(n,cekpengajuan(kp,kodenya));
         baranggadai(kodenya,n,kp,cekangsuran(kp,kodenya));
         goto menu;
      }else{
      	cout<<"data tidak ditemukan!!";
         getch();
         goto menu;
      }
   }else{
   	strcpy(notif,"Menu tidak tersedia!!\n");
   	goto menu;
   }
}
