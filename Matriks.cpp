#include <iostream>
#include <stdlib.h>
#include <limits>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;
int Penjumlahan();
int Perkalian();
int Transpose();
int a[100][100],b[100][100],c[100][100],b1,b2,k1,k2;
int i,j,k,menu;
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
            cout<<"Input salah, masukkan angka! : ";

    }
 while(kata!=0);
    return 0;
}

int main()
{
    cout << "========= PRAKTIKUM ALPROG =========" << endl;
	cout << "=========== KELOMPOK 26 ============" << endl;
	cout << "============== MATRIKS =============" << endl << endl;
	cout << "*CATATAN*"<<endl;
	cout << "-Syarat penjumlahan = baris dan kolom matriks A dan B harus sama"<<endl;
    cout << "-Syarat perkalian = kolom matriks A dan B harus sama\n\n"<<endl;
    cout <<"Masukkan banyak Kolom dan Baris Matriks A dan B:"<<endl;
    cout <<"MATRIKS A:"<<endl;
    //inputan untuk banyak baris dan kolom matriks A.
    cout <<"Masukkan Banyak Baris Matriks A: ";
    validasi(); b1=atoi(val);
    cout <<"Masukkan Banyak Kolom Matriks A: ";
    validasi(); k1=atoi(val);
    cout <<"\nMATRIKS B:"<<endl;
    //inputan untuk banyak baris dan kolom matriks B.
    cout <<"Masukkan Banyak Baris Matriks B: ";
    validasi(); b2=atoi(val);
    cout <<"Masukkan Banyak Kolom Matriks B: ";
   validasi();  k2=atoi(val);
    //Perulangan untuk inputan Matriks A
    for(i=0;i<b1;i++){
        for (j=0;j<k1;j++){
            cout<<"Elemen baris ke " <<(i+1)<<" dan kolom ke "<<(j+1)<< " = ";
            validasi(); a[i][j]=atoi(val);
        }
    }cout<<endl<<endl;

    //Perualangan Untuk Inputan Matriks B
    for(i=0;i<b2;i++){
        for (j=0;j<k2;j++){
            cout<<"Elemen baris ke " <<(i+1)<<" dan kolom ke "<<(j+1)<< " = ";
            validasi(); b[i][j]=atoi(val);
        }
    }
    string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> menu))
        {
    cout <<endl<<"Ingin Mencari apa? "<<endl;
    cout << "1. Penjumlahan Matriks" << endl;
	cout << "2. Perkalian Matriks" << endl;
	cout << "3. Transpose Matriks" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Pilihan > ";
	continue;
        }
    if ((menu < 1) || (menu > 4))
        {
    cout <<endl<<"Ingin Mencari apa? "<<endl;
    cout << "1. Penjumlahan Matriks" << endl;
	cout << "2. Perkalian Matriks" << endl;
	cout << "3. Transpose Matriks" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Pilihan > ";
	 continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
    cout <<endl<<"Ingin Mencari apa? "<<endl;
    cout << "1. Penjumlahan Matriks" << endl;
	cout << "2. Perkalian Matriks" << endl;
	cout << "3. Transpose Matriks" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Pilihan > ";
    continue;
        }
    switch(menu){

            case 1 :Penjumlahan();break;
            case 2 :Perkalian();break;
            case 3 :Transpose();break;
            case 4 :cout<<"Exit";return 0;
        }
    }}

int Penjumlahan(){
    if(b1 == b2 && k1==k2){
        for (i=0;i<b1;i++){
            for (j=0;j<k1;j++){
                    c[i][j]=a[i][j]+b[i][j];
                }
            }
            cout<<"\n Hasilnya adalah"<<endl;
            for (i=0;i<b1;i++){
                for (j=0;j<k1;j++){
                    cout <<setw(4)<<c[i][j];
                }
                cout<<endl;
            }

        }else{
            cout <<"Untuk Penjumlahan baris dan kolom matriks A harus sama dengan Matriks B"<<endl;
        }
    cout <<endl<<"Ingin Mencari apa? "<<endl;
    cout << "1. Penjumlahan Matriks" << endl;
	cout << "2. Perkalian Matriks" << endl;
	cout << "3. Transpose Matriks" << endl;
	cout << "3. Exit" << endl << endl;
	cout << "Pilihan > ";
	return 0;
    }

int Perkalian(){
    if(k1 == b2)
        {
        for(i=0;i<b2;i++){
            for(j=0;j<k2;j++){
                    c[i][j] =0;
                for(k=0;k<k1;k++){
                        c[i][j] += a[i][k]*b[k][j];
                    }
                }
            }
            cout<<"\n Hasilnya adalah"<<endl;
            for(i=0;i<b1;i++){
                for(j=0;j<k2;j++){
                    cout<<setw(4)<<c[i][j];
                }
                cout<<endl;
            }
        }else{
            cout<<"Kolom Matriks A Harus sama dengan Baris Matriks B"<<endl;
        }
    cout <<endl<<"Ingin Mencari apa? "<<endl;
    cout << "1. Penjumlahan Matriks" << endl;
	cout << "2. Perkalian Matriks" << endl;
	cout << "3. Transpose Matriks" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Pilihan > ";
	return 0;

    }

int Transpose(){
    cout<<"Matriks A sebelum transpose: "<<endl;
        for(i=0;i<b1;i++){
            for(j=0;j<b1;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<"Matriks A sesudah transpose: "<<endl;
        for(i=0;i<b1;i++){
            for(j=0;j<k1;j++)
            {
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    cout <<endl<<"Ingin Mencari apa? "<<endl;
    cout << "1. Penjumlahan Matriks" << endl;
	cout << "2. Perkalian Matriks" << endl;
	cout << "3. Transpose Matriks" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Pilihan > ";
	return 0;
}
