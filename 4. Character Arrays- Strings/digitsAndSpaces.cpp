#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    ch = cin.get();
    int digit = 0, space = 0, alpha = 0;
    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
        {
            digit++;
        }
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            space++;
        }
        ch = cin.get();
    }
    cout << "Alphabets : " << alpha << endl;
    cout << "Digits : " << digit << endl;
    cout << "Spaces : " << space << endl;

    return 0;
}