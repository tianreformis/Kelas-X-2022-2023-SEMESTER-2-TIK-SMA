#include <iostream>
using namespace std;

int main(){ //begin of main function
    //If satu kondisi dan satu syarat.
    int nilai=76;
    if (nilai>75){ //begin of if
        string hasil="Lulus";
        cout<<hasil;
    }; //end of if

    if (nilai>=75 && nilai<=100){
        string hasil = "Lulus";
        cout<<hasil;
    }
    
    return 0;
} // end of main function