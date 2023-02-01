
typedef struct savedata{
	char kodesave[20];
   char ket[20];
   int jumlah_pinjaman;
   int biaya;
} savedata;

save(char kp[20]="",char kpes[20]="",int jumtot=0){
	savedata svdt;
   ofstream tulis; // menulis
   char file[50]="Barang_",kode[20];
   strcat(file,kpes);
   strcat(file,"_");
   strcat(file,kp);
   strcat(file,".db");
      tulis.open("savedata.db", ios::binary | ios::app);
   	strcpy(svdt.kodesave,file);
      strcpy(svdt.ket,"Save Berhasil");
      ulang:
      cout<<"Masukan Jumlah Pinjaman(MAX : Rp. "<<(jumtot/100)*80<<") : ";
      cin>>svdt.jumlah_pinjaman;
      svdt.biaya=(jumtot/100)*5;
      if(svdt.jumlah_pinjaman>((jumtot/100)*80)){
       	cout<<"Jumlah Pinjaman Terlalu Besar"<<endl;
         goto ulang;
      }else if(svdt.jumlah_pinjaman<=0){
       	cout<<"Jumlah Pinjaman Tidak Boleh Kurang atau Sama dengan 0"<<endl;
         goto ulang;
      }else{
      	cout<<"Warning!!! Data yang telah di save tidak dapat diubah lagi!!!"<<endl;
   		cout<<"Apakah anda yakin ingin menyimpan data??? [Y/y] : ";gets(kode);
   		if(strcmp(strupr(kode),"Y")==0){
      		tulis.write((char *) &svdt, sizeof(svdt)); // menulis ke file
        		cout<<"Save Berhasil"<<endl;
         }else{
      		cout<<"Save Dibatalkan"<<endl;
      	}
      }
      tulis.close();

   getch();
}

jumlah_pinjaman(char kp[20]="",char kpes[20]=""){
	savedata svdt;
   ifstream baca; // membaca
   char file[50]="Barang_",kode[20];
   strcat(file,kpes);
   strcat(file,"_");
   strcat(file,kp);
   strcat(file,".db");
      baca.open("savedata.db", ios::binary | ios::app);
   	int jumlah=0;
		while(baca.read((char *) &svdt, sizeof(svdt)))
      {
      	if(strcmp(svdt.kodesave,file)==0){
         	jumlah=svdt.jumlah_pinjaman;
         }
      }
      baca.close();
   return jumlah;
}
