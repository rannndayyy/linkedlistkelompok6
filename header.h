#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX 14
using namespace std;

struct Node {
    string nama;
    int kehadiran[MAX];
    Node* next;
};
//======================
//==prototype function==
//======================
void tambahMahasiswa (string nama);
void tambahKehadiran (string nama, int pertemuan);
void cetakData();

