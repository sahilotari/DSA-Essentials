#include <iostream>
using namespace std;

//Run length Encoding for String Compression
//if compressed string is bigger than original return original string
//Input:aaabbccddee
//Output:a2b2c2d2e2
//Input:abcd
//Output: abcd
string compressString(string str){
    int n = str.length();
    string ans;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        while (i<n-1 and str[i+1]==str[i])
        {
            cnt++;
            i++;
        }
        ans += str[i];
        ans +=to_string(cnt);        
    }
    if(ans.length()>n){
        return str;
    }
    return ans;    
}

int main()
{
    string s;
    cin>>s;
    cout<<compressString(s)<<endl;
    return 0;
}
//Time Complexity - O(n);
