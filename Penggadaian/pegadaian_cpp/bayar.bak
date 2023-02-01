/*
  Pembuat    : Risky Kurniawan
  Nim        : 16180001
  Email      : Riskykurniawan@programmer.net / Riskykurniawan15@gmail.com
  Kontak     : 083826114233
  Pembimbing : Salman Topiq S.Kom, M.Kom
  Diajukan   : Tugas Akhir Dasar Pemrograman
*/
typedef struct databayar{
	int kodebayar;
   char tgl[30];
	long jumlahbayar;
} databayar;

jumlahbayar(char kp[20]="",char kpes[20]=""){
	ifstream baca; // membaca
   databayar dtbr;
   char file[50]="Bayar_";
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

inputbayar(char kp[20]="",char kpes[20]="",int sisa=0,int angsuran=0){
	databayar dtbyr;
   ofstream tulis; // menulis
   char file[50]="Bayar_";
   strcat(file,kpes);
   strcat(file,"_");
   strcat(file,kp);
   strcat(file,".db");
		tulis.open(file, ios::binary | ios::app);
   	cout<<"Input Pembayaran Angsuran Gadai"<<endl;
   	cout<<"Kode Pembayaran     : "<<jumlahbayar(kp,kpes)<<" (auto)"<<endl;
      dtbyr.kodebayar=jumlahbayar(kp,kpes);
      struct tm *Sys_T;
      time_t Tval;
      Tval = time(NULL);
    	Sys_T = localtime(&Tval);
		strcpy(dtbyr.tgl,asctime (Sys_T));
      cout<<"Recomend Pembayaran : Rp. "<<sisa/(angsuran-dtbyr.kodebayar+1)<<endl;
      cout<<"Jumlah Pembayaran   : Rp. ";cin>>dtbyr.jumlahbayar;
      int ub,kem;
      cout<<"Uang Bayar          : Rp. ";cin>>ub;
      kem=ub-dtbyr.jumlahbayar;
      cout<<"Kembalian           : Rp. "<<kem<<endl;
      if((sisa-dtbyr.jumlahbayar)>=0){
      	tulis.write((char *) &dtbyr, sizeof(dtbyr)); // menulis ke file
    		tulis.close();
      	cout<<"Data Berhasil Disimpan!!!";
      }else{
         cout<<"Jumlah Bayar Terlalu Banyak dari sisa tunggakan!!!";
      }
      getch();
}

tampilbayar(char kp[20]="",char nama[50]="",char kpes[20]="",int angsuran=0,int jumtotbar=0){
	 ifstream baca; // membaca
    databayar dtbyr;
    int j1,j2,j3,jak;
   	  j1=1;j2=9;j3=30;jak=16;
    head("BAYAR ANGSURAN");
    cout<<"Kode Pengajuan  : "<<kp<<endl;
    cout<<"Nama Pengajuan  : "<<nama<<endl;
    cout<<"Jumlah Angsuran : "<<angsuran<<endl;
    	char file[50]="Bayar_";
   	strcat(file,kpes);
      strcat(file,"_");
      strcat(file,kp);
   	strcat(file,".db");
		baca.open(file, ios::binary);
    		baca.close();
         j2=j2+j1;
         j3=j3+j2;
         jak=jak+j3;
   	garis(jak);
         gotoxy(j1,wherey());cout<<"| Kode ";
   		gotoxy(j2,wherey());cout<<"| Tanggal Bayar";
         gotoxy(j3,wherey());cout<<"| Jumlah Bayar";
         gotoxy(jak,wherey());cout<<" |";
         cout<<endl;
      garis(jak);
      	baca.open(file, ios::binary);
         int j=1,jumtot=0;
   		while(baca.read((char *) &dtbyr, sizeof(dtbyr)))
         {
         	gotoxy(j1,wherey());cout<<"| "<<dtbyr.kodebayar;
   			gotoxy(j2,wherey());cout<<"| "<<dtbyr.tgl;
            gotoxy(j3,wherey()-1);cout<<"| Rp. "<<dtbyr.jumlahbayar;
            jumtot=jumtot+dtbyr.jumlahbayar;
            gotoxy(jak,wherey());cout<<" |";
   			cout<<endl;
            angsuran--;
            j++;
         }
         if(j==1){
            gotoxy(1,wherey());cout<<"\t\tData Masih Kosong"<<endl;
         }
         	garis(jak);
            gotoxy(j1,wherey());cout<<"| Total Pinjaman ";
         	gotoxy(j3,wherey());cout<<"| Rp. "<<jumlah_pinjaman(kp,kpes);
         	gotoxy(jak,wherey());cout<<" |";
   			cout<<endl;
            gotoxy(j1,wherey());cout<<"| Total Biaya Penitipan Barang";
         	gotoxy(j3,wherey());cout<<"| Rp. "<<(jumtotbar/100)*5;
         	gotoxy(jak,wherey());cout<<" |";
   			cout<<endl;
         	gotoxy(j1,wherey());cout<<"| Total Bayar ";
         	gotoxy(j3,wherey());cout<<"| Rp. "<<jumtot;
         	gotoxy(jak,wherey());cout<<" |";
   			cout<<endl;
            garis(jak);
            gotoxy(j1,wherey());cout<<"| Sisa Tunggakan ";
            int sisa=(jumlah_pinjaman(kp,kpes)+((jumtotbar/100)*5))-jumtot;
         	gotoxy(j3,wherey());cout<<"| Rp. "<<sisa;
         	gotoxy(jak,wherey());cout<<" |";
            cout<<endl;
         baca.close();
         garis(jak);cout<<endl;

         return sisa;

}

bayarangsuran(char kp[20]="",char nama[50]="",char kpes[20]="",int angsuran=0,int jumtot=0){
   char pilih_menu,notif[50]="";
   menu:
   clrscr();
   int sisa=tampilbayar(kp,nama,kpes,angsuran,jumtot);
   cout<<notif;
   strcpy(notif,"");
   if(sisa>0){
   	cout<<"1. Bayar Angsuran Gadai"<<endl;
   }
   cout<<"0. Kembali "<<endl;
   cout<<"Menu pilihan anda adalah : ";cin>>pilih_menu;
   if(pilih_menu=='0'){
   	clrscr();
   }else if(pilih_menu=='1' && sisa>0){
     	clrscr();
     	tampilbayar(kp,nama,kpes,angsuran,jumtot);
   	inputbayar(kp,kpes,sisa,angsuran);
     	goto menu;
   }else{
   	strcpy(notif,"Menu tidak tersedia!!\n");
   	goto menu;
   }
}
