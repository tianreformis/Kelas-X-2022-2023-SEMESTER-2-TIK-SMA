#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int hasilmin = min(4,2);
    int hasilmax = max (11,10);
    float hasilakar = sqrt(16);
    cout<<"Masukkan Pangkat = ";cin>>n;
    int hasil= pow(2,n);
    cout<<"2 pangkat "<<n<<" adalah "<<hasil<<endl;
    cout<<hasilmin<<endl;
    cout<<hasilmax<<endl;
    cout<<hasilakar<<endl;
    return 0;
}
