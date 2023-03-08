/**/
#include <iostream>
using namespace std;
int main()
{
    int nilai=101;
    if (nilai>=75 && nilai <=100){
        string hasil="Lulus";
        cout<<hasil;
    }
    else if (nilai>0 && nilai<75){
        string hasil="tidak lulus";
        cout<<hasil;
    }
    else {
        string hasil ="diluar jangkauan";
        cout<<hasil;
    }
    return 0;
}
