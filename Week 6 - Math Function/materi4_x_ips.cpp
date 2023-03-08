#include <iostream>
using namespace std;

int main(){
    bool a=false;
    bool b=true;
    bool hasilno1 = (!a) && (!b);
    bool hasilno2 = a || (!b);
    cout<<hasilno1<<endl;
    cout<<hasilno2<<endl;

    return 0;   
}