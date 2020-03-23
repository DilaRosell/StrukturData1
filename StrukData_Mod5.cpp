#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct node
{
      string maha;
      int NIM;
      node* next;
};

node* kepala;
node* ekor;
node* alur;
node* entry;
node* del;
node* bantu;

void inisialisasi()
{
      kepala = NULL; //Inisialisasi
      ekor = NULL; //Inisialisasi
}

void input()
{
      node* baru;
      for(int i=0;i<4;i++) {
      baru = new node;
      cout<<"Masukan Nama Mahasiswa : ";
      cin>>baru->maha;
      cout<<"Masukan NIM Mahasiswa  : ";
      cin>>baru->NIM;
      baru->next = NULL;
      if(kepala == NULL) {
        kepala = baru;
        kepala->next = NULL;
      } else {
        bantu = kepala;
        while(bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
      }
    }
}


void hapus()
{
    string d;
    if (kepala != NULL)
    {
    if(kepala->next != NULL)
    {
    bantu = kepala;
    while(bantu->next->next!=NULL)
    {
    bantu = bantu->next;
    }
    del = bantu->next;
    d = del->maha;
    bantu->next = NULL;
    delete del;
    }
    else
    {
    d = kepala->maha;
    kepala = NULL;
    }
    cout<<d<<" terhapus";
    }
    else
    cout<<"Masih kosong\n";
}
void cetak()
{
      alur = kepala;
      if(kepala == NULL)
            cout<<"\ntidak ada data dalam linked list"<<endl;
      else
      {
            cout<<"Nama Mahasiswa \t NIM \n";
            while(alur!=NULL)
            {
                  cout<<alur->maha<<"\t\t"<<alur->NIM<<endl;
                  alur = alur->next;
            }
            cout<<endl;
      }
}

int main()
{
    int nim;
    string mhs;
      inisialisasi();
      input();
      cetak();
      hapus();
      cout<<endl;
      cetak();
      return EXIT_SUCCESS;
}
