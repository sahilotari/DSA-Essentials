#include <iostream>
using namespace std;
int getIthBit(int n,int i){
    int mask = 1<<i;
    int ans = n&mask;
    if(ans) return 1;
    return 0;
}
void setIthBit(int &n,int i){
    int mask=1<<i;
    n=n|mask;
}
void clearIthBit(int &n,int i){
      int mask=~(1<<i);
      n=n&mask;
}
void updateIthBit(int &n,int i,int v){
    clearIthBit(n,i);
    int mask = v<<i;
    n=n|mask;

}
void clearLastIBits(int &n,int i){
    int mask = (~0)<<i;
    n = n & mask;
}
void clearBitsInRange(int &n,int i,int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a&b;
    n = n&mask;
}

int main(int argc, char const *argv[])
{
    int n=5;
    int i;
    cin>>i;
    cout<<getIthBit(n,i)<<endl;
    return 0;
}
