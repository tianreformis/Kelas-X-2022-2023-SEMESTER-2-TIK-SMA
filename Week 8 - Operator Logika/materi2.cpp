#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    bool a,b,c;
    cout<<"Masukkan Nilai [0,1] = ";cin>>a;
    cout<<"Masukkan Nilai [0,1] = ";cin>>b;
    cout<<"Masukkan Nilai [0,1] = ";cin>>c;    
    bool hasil = (a&&b) || !c;
    cout<<hasil;
    return 0;
}
