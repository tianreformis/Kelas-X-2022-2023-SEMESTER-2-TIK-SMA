#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    bool a,b,c,d;
    a = 1; //contoh perhitungan baris pertama.
    b = 1;
    c = 1;
    d = 1;
    bool ruas_pertama = !(a && b);
    bool ruas_kedua = (c || d);
    bool ruas_ketiga = ruas_pertama || ruas_kedua; 
    cout<<ruas_ketiga;
    return 0;
}
