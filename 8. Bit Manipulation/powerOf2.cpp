#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    if((n&(n-1))==0){
        cout<<n<<" is power of 2."<<endl;
    }
    else{
        cout<<n<<" is not power of 2"<<endl;
    }
    return 0;
}
