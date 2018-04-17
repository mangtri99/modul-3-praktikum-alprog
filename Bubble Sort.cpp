#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits>
#include <sstream>
#include <string>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int seribu();
int enamBelas();
int enamEmpat();

int clean();

int main(){
	int pilihan;

    cout << "========= PRAKTIKUM ALPROG =========" << endl;
	cout << "=========== KELOMPOK 26 ============" << endl;
	cout << "============ BUBBLE SORT ===========" << endl << endl;
	cout << "1. 1000 DATA" << endl;
	cout << "2. 16000 DATA" << endl;
	cout << "3. 64000 DATA" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Pilihan > ";
	string  line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        char errorTest;
        if ((!(linestream >> pilihan))||((pilihan < 1) || (pilihan > 4))||(linestream >> errorTest))
        {
        cout << "inputan salah, silahkan inputkan lagi :" << endl;
        cout << "1. 1000 DATA" << endl;
        cout << "2. 16000 DATA" << endl;
        cout << "3. 64000 DATA" << endl;
        cout << "4. Exit" << endl << endl;
        cout << "Pilihan > ";
             continue;
        }

        switch(pilihan){

            case 1 :seribu();break;
            case 2 :enamBelas();break;
            case 3 :enamEmpat();break;
            case 4 :cout<<"exit";return 0;
        }
    }
}

int seribu(){
	clock_t waktu;
	double waktu_diperlukan[2];
	int i, j, size, temp;
	int array1[1000], array2[1000];
	system("cls");

	size = sizeof(array1) / sizeof(array1[0]);
	srand((unsigned) time(NULL));

	for(i=0; i<size; i++){
		array1[i] = rand();
		array2[i] = array1[i];
	}

	int *pointer = array2;

	waktu = clock();
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i; j++){
			if(array1[j] > array1[j+1]){
				temp = array1[j];
				array1[j] = array1[j+1];
				array1[j+1] = temp;
			}
		}
	}
	waktu = clock() - waktu;

	waktu_diperlukan[0] = (double)(waktu) / CLOCKS_PER_SEC;

	for(i=0; i<size; i++){
		if(i == size - 1){
			cout<<" dan "<< array1[i]<< ".";
		}
		else{
			cout<< array1[i]<<",";
		}
	}

	waktu = clock();
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i; j++){
			if(pointer[j] > pointer[j+1]){
				temp = pointer[j];
				pointer[j] = pointer[j+1];
				pointer[j+1] = temp;
			}
		}
	}
	waktu = clock() - waktu;

	waktu_diperlukan[1] = (double)(waktu) / CLOCKS_PER_SEC;

    cout<< "\n\nCara biasa memerlukan waktu " << waktu_diperlukan[0] << " detik untuk mengurutkan data" << endl;
	cout<< "\nDengan menggunakan pointer, waktu yang diperlukan untuk mengurutkan data yaitu " << waktu_diperlukan[1] << " detik" << endl << endl ;
    return main();
}

int enamBelas(){
	clock_t waktu;
	double waktu_diperlukan[2];
	int i, j, size, temp;
	int array1[16000], array2[16000];

	size = sizeof(array1) / sizeof(array1[0]);
	srand((unsigned) time(NULL));

	for(i=0; i<size; i++){
		array1[i] = rand();
		array2[i] = array1[i];
	}

	int *pointer = array2;

	waktu = clock();
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i; j++){
			if(array1[j] > array1[j+1]){
				temp = array1[j];
				array1[j] = array1[j+1];
				array1[j+1] = temp;
			}
		}
	}
	waktu = clock() - waktu;

	waktu_diperlukan[0] = (double)(waktu) / CLOCKS_PER_SEC;

	for(i=0; i<size; i++){
		if(i == size - 1){
			cout<<" dan "<< array1[i]<< ".";
		}
		else{
			cout<< array1[i]<<",";
		}
	}

	waktu = clock();
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i; j++){
			if(pointer[j] > pointer[j+1]){
				temp = pointer[j];
				pointer[j] = pointer[j+1];
				pointer[j+1] = temp;
			}
		}
	}
	waktu = clock() - waktu;

	waktu_diperlukan[1] = (double)(waktu) / CLOCKS_PER_SEC;


	cout<< "\n\nCara biasa memerlukan waktu " << waktu_diperlukan[0] << " detik untuk mengurutkan data" << endl;
	cout<< "\nDengan menggunakan pointer, waktu yang diperlukan untuk mengurutkan data yaitu " << waktu_diperlukan[1] << " detik" << endl << endl ;
    return main();
}

int enamEmpat(){
	clock_t waktu;
	double waktu_diperlukan[2];
	int i, j, size, temp;
	int array1[64000], array2[64000];
	system("cls");

	size = sizeof(array1) / sizeof(array1[0]);
	srand((unsigned) time(NULL));

	for(i=0; i<size; i++){
		array1[i] = rand();
		array2[i] = array1[i];
	}

	int *pointer = array2;

	waktu = clock();
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i; j++){
			if(array1[j] > array1[j+1]){
				temp = array1[j];
				array1[j] = array1[j+1];
				array1[j+1] = temp;
			}
		}
	}
	waktu = clock() - waktu;

	waktu_diperlukan[0] = (double)(waktu) / CLOCKS_PER_SEC;

	for(i=0; i<size; i++){
		if(i == size - 1){
			cout<<" dan "<< array1[i]<< ".";
		}
		else{
			cout<< array1[i]<<",";
		}
	}

	waktu = clock();
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i; j++){
			if(pointer[j] > pointer[j+1]){
				temp = pointer[j];
				pointer[j] = pointer[j+1];
				pointer[j+1] = temp;
			}
		}
	}
	waktu = clock() - waktu;

	waktu_diperlukan[1] = (double)(waktu) / CLOCKS_PER_SEC;


    cout<< "\n\nCara biasa memerlukan waktu " << waktu_diperlukan[0] << " detik untuk mengurutkan data" << endl;
	cout<< "\nDengan menggunakan pointer, waktu yang diperlukan untuk mengurutkan data yaitu " << waktu_diperlukan[1] << " detik" << endl << endl ;
	return main();
}


int clean(){
	while(getchar() != '\n');
	return 1;
}

