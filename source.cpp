#include "header.h"
Node* head = NULL;

void tambahMahasiswa(string nama) 
{
    Node* newNode = new Node();
    newNode->nama = nama;
    for(int i=0; i<MAX; i++) {
        newNode->kehadiran[i] = 0;
    }
    newNode->next = head;
    head = newNode;
    cout << "Data mahasiswa berhasil dimasukkan\n";
}

void tambahKehadiran(string nama, int jumlahKehadiran) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->nama == nama) {
            for(int i = 0; i < 14; i++) {
                temp->kehadiran[i] = (i < jumlahKehadiran) ? 1 : 0;
            }
            cout << "Data kehadiran mahasiswa berhasil dimasukkan\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Nama mahasiswa tidak ditemukan\n";
}

void cetakData() {
    Node* temp = head;
    while(temp != NULL) {
        cout << "Nama: " << temp->nama << endl;
        cout << "Kehadiran: ";
        for(int i=0; i<MAX; i++) {
            cout <<  temp->kehadiran[i] ;
        }
        cout << endl;
        temp = temp->next;
    }
}

