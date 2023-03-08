#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int angka1,angka2;
    cout<<"Masukkan Angka  = "; cin>>angka1;
    cout<<"Masukkan Angka Pangkat = "; cin>>angka2;
    int hasil = pow(angka1, angka2);
    cout<<hasil;
    return 0;
}
