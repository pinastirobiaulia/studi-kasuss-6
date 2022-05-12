#include<iostream>
#include<string> 
using namespace std;

class nilai{
	private :
		char nama[30];
		char matkul[30];
		int tugas, uts, uas, n_akhir, n_rata;
	public :
		void input();
		void output();
};

void nilai::input(){
	cout<<"\t\t\tINPUT DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"Masukkan nama mahasiswa   : "; 
  	cin>>nama; 
	cout<<"Masukkan nama mata kuliah : "; 
  	cin>>matkul;
	cout<<"Masukkan nilai tugas      : "; 
  	cin>>tugas;
	cout<<"Masukkan nilai UTS        : "; 
  	cin>>uts;
	cout<<"Masukkan nilai UAS        : "; 
  	cin>>uas;
} 

void nilai::output(){
	cout<<"\t\t\tDAFTAR NILAI MAHASISWA"<<endl;
	cout<<"Nama mahasiswa  : "<<nama<<endl;
	cout<<"Mata kuliah     : "<<matkul<<endl;
	cout<<"Nilai tugas     : "<<tugas<<endl;
	cout<<"Nilai UTS       : "<<uts<<endl;
	cout<<"Nilai UAS       : "<<uas<<endl;
  	n_akhir = ((tugas*20/100) + (uts*35/100) +(uas*45/100));
	cout<<"Nilai akhir     : "<<n_akhir<<endl;
  	n_rata = ((tugas + uts + uas + n_akhir)/4);
  	cout<<"Nilai rata-rata : "<<n_rata<<endl; 
}

int main(){
	nilai x;
	x.input();
	x.output();
	return 0;
}
