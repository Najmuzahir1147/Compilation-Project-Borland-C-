program(char judd[49]="")
{
if(strcmp(judd,"PROGRAM")==0)
{
awal:
clrscr();
int kelas,jumlah,total,harga,kmb,byr,i,a=0;
char kode[100],nama[100],konfir,np[20],tum,pw[15];
cout<<"\nPROGRAM MADE BY ARN PROJECT"<<endl;
cout<<"     JAKARTA-SINGAPORE       "<<endl;
cout<<"==========================="<<endl;
cout<<"Masukan Kode Pesawat [MPT/GRD/BTV] = ";
cin>>kode;
cout<<"   KELAS PESAWAT "<<endl;
cout<<"1. EXCECUTIVE"<<endl;
cout<<"2. BISNIS"<<endl;
cout<<"3. EKONOMI"<<endl;
cout<<"============================"<<endl;
cout<<endl;

cout<<"PILIH KELAS [1/2/3] = ";
cin>>kelas;
cout<<endl;

if((strcmp(kode,"mpt")==0)||(strcmp(kode,"MPT")==0)){
strcpy(nama,"MERPATI");
if(kelas==1)
{harga=1500000;}
else if(kelas==2)
{harga=900000;}
else if(kelas==3)
{harga=500000;}
else{
cout<<"Kode Yang Anda Masukan Salah";
}
}

else if((strcmp(kode,"grd")==0)||(strcmp(kode,"GRD")==0)){
strcpy(nama,"GARUDA");
if(kelas==1)
{harga=1200000;}
else if(kelas==2)
{harga=800000;}
else if(kelas==3)
{harga=400000;}
else{
cout<<"Kode Yang anda masukan salah";
}
}

else if((strcmp(kode,"btv")==0)||(strcmp(kode,"BTV")==0))
{
strcpy(nama,"BATAVIA");
if(kelas==1)
{harga=1000000;}
else if(kelas==2)
{harga=700000;}
else if(kelas==3)
{harga=300000;}
else{
cout<<"Kode Yang anda masukan salah";
}
}

else{
cout<<"Kode yang anda masukan salah";
}

clrscr();
ofstream file;
file.open("print.db");
cout<<"============= Tiket Anda ==============="<<endl;
cout<<"NAMA PESAWAT   = "<<nama<<endl;
cout<<"HARGA TIKET    = "<<harga<<endl;
cout<<"JUMLAH TIKET   = ";
cin>>jumlah;
total=harga*jumlah;
file<<"NAMA PENUMPANG = "<<np<<endl;
file<<"NAMA PESAWAT   = "<<nama<<endl;
file<<"HARGA TIKET    = "<<harga<<endl;
file<<"JUMLAH TIKET   = "<<jumlah<<endl;
cout<<"TOTAL BAYAR    = "<<total<<endl;
file<<"TOTAL BAYAR    = "<<total<<endl;
cout<<"PEMBAYARAN     = ";cin>>byr;
file<<"PEMBAYARAN     = "<<byr<<endl;
kmb=byr-total;
cout<<"KEMBALIAN      = "<<kmb<<endl;
file<<"KEMBALIAN      = "<<kmb<<endl;
file<<"======================"<<endl;
file.close();
printf("Loading...");
getch();
system("notepad/p print.db");
printf("\nPrinting...");

cout<<"Ingin Input Lagi [Y/T] = ";
cin>>konfir;
if (konfir=='Y'||konfir=='y')
{goto awal;}
else
{exit(0);}
getch();
}
}
