#include<iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
using namespace std;

float rata(float[],int);
float median(float[],int);
float mod(float[],int);

int kata;
char val [100];

int validasi()
{
    do
    {
        kata=0;
        cin>>val;
        for(int i=0; i<strlen(val); i++)
        {
            if(isdigit(val[i])==0)
                kata++;
        }
        if(kata !=0)
            cout<<"Input salah, masukkan angka : " ;

    }
 while(kata!=0);
    return 0;
}


int main(){
int i,n,menu;
float *data;
float modus;
mulai :
    cout << "========= PRAKTIKUM ALPROG =========" << endl;
	cout << "=========== KELOMPOK 26 ============" << endl;
	cout << "=========== STATISTIKA =============" << endl << endl;
cout<<"Masukan jumlah data = ";
validasi(); n=atoi(val);
data = new float[n];
cout<<endl;
for(i=0; i<n; i++){
 cout<<"Masukkan data ke- "<<i+1<<" : ";
 validasi(); data[i]=atoi(val);
}
awal :
 cout<<"\nData yang anda masukkan :";
 for(i=0; i<n; i++){
  cout<<"\nData ke- "<<i+1<<" : "<<data[i];
 }
    cout << "\n\n1. Menentukan Mean" << endl;
	cout << "2. Menentukan Median" << endl;
	cout << "3. Menentukan Modus" << endl;
	cout << "4. Ulangi input data" << endl;
	cout << "5. Keluar"<<endl<<endl;
	cout << "Pilihan > ";
 validasi(); menu=atoi(val);
 switch(menu){

 case 1:
 cout<<"\n\tMean   = "<<rata(data,n);
 break;

 case 2:
 cout<<"\n\tMedian = "<<median(data,n);
 break;

 case 3:{
 modus=mod(data,n);
 if (modus!=0)
  cout<<"\n\tModus  = "<<modus;
 else
  cout<<"Tidak ada data modus";
 break;
 }

 case 4:{
  system("cls");
  goto mulai;
  break;
 }
 break;

 case 5:{
  cout<<"EXIT";
  return 0;
 }
 break;

 default:
 cout<<"Pilihan tidak tersedia, masukkan pilihan 1-5 !";
 break;
 }

 getch();
 int pilihan;
 cout << "\n\nApakah anda ingin mencoba lagi? jika ya tekan <1>, jika tidak tekan angka selain <1>" << endl;
 cout << "Pilihan > ";
 validasi(); pilihan=atoi(val);
 cout << endl;
 if(pilihan==1) {
  system("CLS");
  goto awal;
 }
 else
  cout << "E X I T" << endl;
}

float rata(float *data,int n){
int i;
float sum=0;
for(i=0;i<n;i++)

sum=sum+data[i];

return (sum/n);

}

float median(float *data,int n){

float temp;
int i,j;
for(i=0;i<n;i++)

for(j=i+1;j<n;j++){

 if(data[i]>data[j]){

 temp=data[j];
 data[j]=data[i];
 data[i]=temp;
 }
}

if(n%2==0)
return (data[n/2]+data[n/2-1])/2;
else
return data[n/2];
}

float mod(float *a,int n){
 double modus;
 int Byk_sementara=1;
 int y;
 int byk[100];
 for(int i=0;i<10;i++) {
  byk[i]=0;
  for(int j=0;j<10;j++) {
   if(a[i]==a[j]) {
    byk[i]++;
   }
  }
 }
 for(int i=0;i<10;i++) {
  if(byk[i]>Byk_sementara) {
   Byk_sementara=byk[i];
   y=i;
  }
 }
 modus=a[y];
 return modus;
}

