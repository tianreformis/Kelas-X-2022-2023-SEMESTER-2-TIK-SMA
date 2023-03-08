#include <math.h>
#include <iostream>

using  namespace std;

int angka; //variabel global
int main() //main function
//kompilasi (compiler) menghubah bahasa program menjadi 
//bahasa yang bisa dimengerti komputer
{
    int angka2; //variabel lokal
    int hasilmax = max(7,8); //fungsi untuk mencari nilai maksimal
    int hasilmin = min(7,8); //fungsi untuk mencari nilai minimal
    int hasilsqrt = sqrt(16); //fungsi akar square
    int hasillog = log(9); //fungsi log
    int hasilpow = pow(2,3); //mencari pangkat  
    
    cout<<hasilmax<<endl;
    cout<<hasilmin<<endl;
    cout<<hasilsqrt<<endl;
    cout<<hasillog<<endl;

    

    return 0;
}


