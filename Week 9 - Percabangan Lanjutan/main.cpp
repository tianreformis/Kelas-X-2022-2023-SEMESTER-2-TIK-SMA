#include <iostream>
using namespace std;
int main(){
    int nilai=90;
    string keterangan; 

    if (nilai>90){
        keterangan ="A";
    }
    else if (nilai>80){
        keterangan ="B";
    }
    else if (nilai>70){
        keterangan ="C";
    }
    else if (nilai>60){
        keterangan ="D";
    }
    else {
        keterangan ="Tidak Lulus";
    }    
    cout<<keterangan;

    //tambahkan logika supaya nilai >100 <0

    return 0;
}