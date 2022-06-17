#include <iomanip>
#include <iostream>

using namespace std;

class kasus {

private:
  int kolom, baris;
  string jenis_book[15];  
  string judul_book[20];
  string penulis_book[15];
  string array2d[3][15];
  int qty_book;

public:
  void input();
  void proses();
  void output();
};

void kasus::input()
{
	cout<<"Masukkan Jumlah Buku : ";cin>>qty_book;
  	for (int i = 0; i < qty_book; i++)
	    { 
	  	  cin.ignore();
  	    cout << "Judul Buku Ke-" << i + 1 << ":"<<endl;
  	    cout << "Jenis Buku  : ";
        getline(cin, jenis_book[i]);
  	    cout << "Judul       : ";
        getline(cin, judul_book[i]); 
  	    cout << "Penulis     : ";
        getline(cin, penulis_book[i]);
        cout<<endl;
      }
}

void kasus::proses(){
	for(int i = 0; i < qty_book+1; i++){
		if(i==0){
			for(int j = 0; j < 3; j++){
				array2d[i][j]=jenis_book[j];  
			}
		}else if(i == 1){
			for(int j = 0; j < 3; j++){
				array2d[i][j]=judul_book[j];
			}
		}else if(i == 2){
			for(int j = 0; j < 3; j++){
				array2d[2][j]=penulis_book[j];
			}
		}
	}

}

void kasus::output() 
{
  cout << "1D : ";
  for (int i = 0; i < qty_book; i++) 
  {
    cout << jenis_book[i] << "\t" << judul_book[i] << "\t" << penulis_book[i] << "\t";
  }   
  cout<<endl<<endl;
  
  cout<<"2D : "<<endl;
  cout << "\t|\tJenis Buku \t|\t Judul \t\t |\t Penulis";
  cout << endl;
  for (int i = 0; i < qty_book; i++) 
  {
    cout << "\t|\t" << array2d[0][i] << "\t\t|\t " << array2d[1][i] << "  \t|\t " << array2d[2][i];
    cout << endl;
  } 
}

int main()
{
	kasus x;
	x.input();
	x.proses();
	x.output();
}