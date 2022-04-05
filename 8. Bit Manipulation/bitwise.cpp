#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x=0;
    //negation of integer 0 is -1.
    //negation of bit 0 is 1
    cout<<(~x)<<endl;
    int p =3;
    //left shift
    p=p<<2;
    cout<<p<<endl;//p<<n -> p gets multiplied by nth power of 2

    //right shift
    p=p>>2;
    cout<<p<<endl;//p>>2 -> p gets divided by nth power of 2.
    
    return 0;
}
