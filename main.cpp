#include "header.h"

int main() {
	string nama;
    int pertemuan;
    int choose;
	do
	{
		//Tampilkan menu
		cout<<" =================================="<<endl;
		cout<<" =\t M E N U  P I L I H A N		  "<<endl;
		cout<<" =================================="<<endl;
		cout<<" =1.  Tambah Mahasiswa		      "<<endl;
		cout<<" =2.  Tambah Kehadiran Mahasiswa   "<<endl;
		cout<<" =3.  Cetak Seluruh Data	          "<<endl;
		cout<<" =0.  EXIT                         "<<endl;
		cout<<" =================================="<<endl;
		cout<<"Masukan pilihan : "; cin >> choose;
	switch (choose)
	{
		case 1:
			cout << "Masukkan nama Mahasiswa: ";
            cin >> nama;
            tambahMahasiswa(nama);
        	break;
		case 2:
		    cout << "Masukkan nama Mahasiswa: ";
            cin >> nama;
            cout << "Masukkan jumlah hadir mahasiswa: ";
            cin >> pertemuan;
            tambahKehadiran(nama, pertemuan);
			break;
		case 3:
			cetakData();
			break;
		default:
			cout <<"Pilihan tidak tersedia";
			break;
	    }
    } while (choose !=0);


  return 0;
}
