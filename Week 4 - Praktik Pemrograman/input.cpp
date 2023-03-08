#include <iostream>
using namespace std;
int main(){
    string nama;
    string ttl;
    int tahunLahir;
    cout<<"Masukkan Nama = ";cin>>nama;
    cout<<"Masukkan TTL = ";cin>>ttl;
    cout<<"Masukkan Tahun lahir = ";cin>>tahunLahir;
    int umur = 2023 - tahunLahir;
    
    cout<<"Nama Anda = "<<nama<<endl;
    cout<<"TTL Anda = "<<ttl<<endl;
    cout<<"Tahu lahir = "<<tahunLahir<<endl;
    cout<<"Umur = "<<umur<<endl;
    return 0;
}