#include <iostream>
using namespace std;
int countSetBits(int n){
    int cnt=0;
    while(n){
        if(n&1){
            cnt++;
        }
        n=n>>1;
    }
    return cnt;
}
int count_bits_hack(int n){
    int ans=0;
    while (n>0)
    {
        //removes the last set bit from the current number.
        n = n&(n-1);
        ans++;
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<countSetBits(n)<<endl;
    cout<<count_bits_hack(n)<<endl;
    return 0;
}
