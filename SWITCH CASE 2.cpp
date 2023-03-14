#include <iostream>
using namespace std;

int main ()
{
	int pilihan;
	float r,l_ling,p,l,l_persegi;
	const float Pi = 3.14;
	
	cout <<"[===============================================]" <<endl;
	cout <<"[ M E N U ]" <<endl;
	cout <<"[ ]" <<endl;
	cout <<"[ 1. Luas Lingkaran ]" <<endl;
	cout <<"[ 2. Luas Persegi Panjang ]" <<endl;
	cout <<"[ ]" <<endl;
	cout <<"[===============================================]" <<endl;
	cout <<"Masukkan Pilihan [1/2] : "; cin >>pilihan;
	
	switch (pilihan)
	{
		case 1 : 
		cout <<"LUAS LINGKARAN" <<endl<<endl;
		cout <<"Masukkan jari-jari : "; cin >>r;
		l_ling = 2 * Pi * r * r;
		cout <<endl<<"Luas Lingkaran = "<<l_ling;
		break;
		
		case 2 :
		cout <<"LUAS PERSEGI PANJANG" <<endl<<endl;
		cout <<"Masukkan Panjang : "; cin >>p;
		cout <<"Masukkan Lebar : "; cin >>l;
		l_persegi = p * l;
		cout <<endl<<"Luas Persegi Panjang = "<<l_persegi;
		break;
		
		default : cout <<"SALAH TEKAN"<<endl;
		
		break;
	}
}
