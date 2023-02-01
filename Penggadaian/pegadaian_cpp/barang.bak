/*
  Pembuat    : Risky Kurniawan
  Nim        : 16180001
  Email      : Riskykurniawan@programmer.net / Riskykurniawan15@gmail.com
  Kontak     : 083826114233
  Pembimbing : Salman Topiq S.Kom, M.Kom
  Diajukan   : Tugas Akhir Dasar Pemrograman
*/
#include "saves.h"
#include "bayar.h"

typedef struct databarang{
	int kodebarang;
   char namabarang[100];
   long estimasi;
   int jumlahbarang;
} databarang;

hapusbarang(char kp[20]="",char kpes[20]=""){
   ofstream tulis; // menulis
   ifstream baca; // membaca
   databarang dtbr;
   remove("tmp.db");
   char file[50]="Barang_",kode[10];
   strcat(file,kpes);
   strcat(file,"_");
   strcat(file,kp);
   strcat(file,".db");
   cout<<"Masukan Kode Barang : ";cin>>kode;
      	baca.open(file, ios::binary);

 			tulis.open("tmp.db", ios::out|ios::binary);

      	int ketemu = 0,urut=1;

 			while(baca.read((char*) &dtbr, sizeof(dtbr))){
  				if(dtbr.kodebarang != atoi(kode)){
            	dtbr.kodebarang=urut;
   				tulis.write((char*)&dtbr, sizeof(dtbr));
               urut++;
  				}else{
            	if(ketemu == 0){
            		ketemu=1;
            	}
         	}
         }

 			baca.close();
 			tulis.close();

 			remove(file);
 			rename("tmp.db", file);
         if (ketemu ==1) {
  				cout<<"Hapus Berhasil";
 			}else{
  				cout<<"Hapus gagal";
 			}
         getch();
}

editbarang(char kp[20]="",char kpes[20]=""){
   ofstream tulis; // menulis
   ifstream baca; // membaca
   databarang dtbr;
   remove("tmp.db");
   char file[50]="Barang_",kode[10];
   strcat(file,kpes);
   strcat(file,"_");
   strcat(file,kp);
   strcat(file,".db");
   cout<<"Masukan Kode Barang : ";cin>>kode;
      	baca.open(file, ios::binary);

 			tulis.open("tmp.db", ios::out|ios::binary);

      	int ketemu = 0;

 			while(baca.read((char*) &dtbr, sizeof(dtbr))){
  				if(dtbr.kodebarang != atoi(kode)){
   				tulis.write((char*)&dtbr, sizeof(dtbr));
  				}else{
            	if(ketemu == 0){
            		ketemu=1;
               	cout<<"Edit Barang Pegadaian Syariah"<<endl;
   					cout<<"Kode Barang    : "<<kode<<endl;
      				cout<<"Nama Barang    : ";gets(dtbr.namabarang);
      				cout<<"Estimasi Harga : ";cin>>dtbr.estimasi;
      				cout<<"Jumlah Barang  : ";cin>>dtbr.jumlahbarang;
						tulis.write((char *) &dtbr, sizeof(dtbr));
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

jumlahbarang(char kp[20]="",char kpes[20]=""){
	ifstream baca; // membaca
   databarang dtbr;
   char file[50]="Barang_";
   strcat(file,kpes);
   strcat(file,"_");
   strcat(file,kp);
   strcat(file,".db");
	baca.open(file, ios::binary);
   int j=1;
		while(baca.read((char *) &dtbr, sizeof(dtbr)))
      {
      	j++;
      }
      baca.close();
   return j;
}

inputbarang(char kp[20]="",char kpes[20]=""){
	databarang dtbr;
   ofstream tulis; // menulis
   char file[50]="Barang_";
   strcat(file,kpes);
   strcat(file,"_");
   strcat(file,kp);
   strcat(file,".db");
		tulis.open(file, ios::binary | ios::app);
   	cout<<"Input Barang Pegadaian Syariah"<<endl;
   	cout<<"Kode Barang    : "<<jumlahbarang(kp,kpes)<<" (auto)"<<endl;
      dtbr.kodebarang=jumlahbarang(kp,kpes);
      cout<<"Nama Barang    : ";gets(dtbr.namabarang);
      cout<<"Estimasi Harga : ";cin>>dtbr.estimasi;
      cout<<"Jumlah Barang  : ";cin>>dtbr.jumlahbarang;
   	tulis.write((char *) &dtbr, sizeof(dtbr)); // menulis ke file
    	tulis.close();
}

tampilbarang(char kp[20]="",char nama[50]="",char kpes[20]=""){
	 ifstream baca; // membaca
    databarang dtbr;
    int j1,j2,j3,j4,j5,jak;
   	  j1=1;j2=9;j3=17;j4=16;j5=12;jak=16;
    head("DATA BARANG");
    cout<<"Kode Pengajuan : "<<kp<<endl;
    cout<<"Nama Pengajuan : "<<nama<<endl;
    	char file[50]="Barang_";
   	strcat(file,kpes);
      strcat(file,"_");
      strcat(file,kp);
   	strcat(file,".db");
		baca.open(file, ios::binary);
    		while(baca.read((char *) &dtbr, sizeof(dtbr)))
    		{
         	if(j3-3<strlen(dtbr.namabarang)){
            	j3=strlen(dtbr.namabarang)+3;
            }
    		}
    		baca.close();
         j2=j2+j1;
         j3=j3+j2;
         j4=j4+j3;
         j5=j5+j4;
         jak=jak+j5;
   	garis(jak);
         gotoxy(j1,wherey());cout<<"| Kode ";
   		gotoxy(j2,wherey());cout<<"| Nama Barang";
         gotoxy(j3,wherey());cout<<"| Estimasi";
         gotoxy(j4,wherey());cout<<"| Jumlah";
         gotoxy(j5,wherey());cout<<"| Total";
         gotoxy(jak,wherey());cout<<" |";
         cout<<endl;
      garis(jak);
      	baca.open(file, ios::binary);
         int j=1,jum=0,jumtot=0;
   		while(baca.read((char *) &dtbr, sizeof(dtbr)))
         {
         	gotoxy(j1,wherey());cout<<"| "<<dtbr.kodebarang;
   			gotoxy(j2,wherey());cout<<"| "<<dtbr.namabarang;
            gotoxy(j3,wherey());cout<<"| Rp. "<<dtbr.estimasi;
            gotoxy(j4,wherey());cout<<"| "<<dtbr.jumlahbarang;
            jum=jum+dtbr.jumlahbarang;
   			gotoxy(j5,wherey());cout<<"| Rp. "<<dtbr.jumlahbarang*dtbr.estimasi;
            jumtot=jumtot+(dtbr.jumlahbarang*dtbr.estimasi);
   			gotoxy(jak,wherey());cout<<" |";
   			cout<<endl;
            j++;
         }
         if(j!=1){
         	garis(jak);
         	gotoxy(j1,wherey());cout<<"| Total ";
         	gotoxy(j4,wherey());cout<<"| "<<jum;
         	gotoxy(j5,wherey());cout<<"| Rp. "<<jumtot;
         	gotoxy(jak,wherey());cout<<" |";
   			cout<<endl;
				baca.close();

         }else if(j==1){
            gotoxy(1,wherey());cout<<"\t\t\tData Masih Kosong"<<endl;
         }
         garis(jak);cout<<endl;

         return jumtot;
}

baranggadai(char kp[20]="",char nama[50]="",char kpes[20]="",int angsuran=0){
   char pilih_menu,notif[50]="";
   menu:
   clrscr();
   int jumtot=tampilbarang(kp,nama,kpes);
   cout<<notif;
   strcpy(notif,"");
   if(jumlah_pinjaman(kp,kpes)==0){
   	cout<<"1. Input Data Barang Gadai"<<endl;
   	cout<<"2. Edit Data Barang Gadai"<<endl;
   	cout<<"3. Hapus Data Barang Gadai"<<endl;
   	cout<<"4. Save Data Barang Gadai"<<endl;
   }else{
      cout<<"1. Lihat Data Angsuran Gadai"<<endl;
   }
   cout<<"0. Kembali "<<endl;
   cout<<"Menu pilihan anda adalah : ";cin>>pilih_menu;
   if(jumlah_pinjaman(kp,kpes)==0){
   	if(pilih_menu=='0'){
   		clrscr();
   	}else if(pilih_menu=='1'){
      	clrscr();
      	tampilbarang(kp,nama,kpes);
   		inputbarang(kp,kpes);
      	goto menu;
   	}else if(pilih_menu=='2'){
      	clrscr();
      	tampilbarang(kp,nama,kpes);
   		editbarang(kp,kpes);
      	goto menu;
   	}else if(pilih_menu=='3'){
      	clrscr();
      	tampilbarang(kp,nama,kpes);
   		hapusbarang(kp,kpes);
      	goto menu;
   	}else if(pilih_menu=='4'){
      	clrscr();
         tampilbarang(kp,nama,kpes);
         if(jumtot==0){
            strcpy(notif,"Data masih kosong!!\n");
         }else{
      		save(kp,kpes,jumtot);
   		}
         goto menu;
   	}else{
   		strcpy(notif,"Menu tidak tersedia!!\n");
   		goto menu;
   	}
   }else{
      if(pilih_menu=='0'){
   		clrscr();
   	}else if(pilih_menu=='1'){
   		bayarangsuran(kp,nama,kpes,angsuran,jumtot);
         goto menu;
   	}else{
   		strcpy(notif,"Menu tidak tersedia!!\n");
   		goto menu;
   	}
   }
}