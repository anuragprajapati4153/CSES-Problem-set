#include <bits/stdc++.h>
using namespace std;

// driver code
int main()
{
    string str;
    cin >> str;
    int cnt = 1;
    int maxi = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
            cnt = 1;
    }
    cout << maxi << endl;
    return 0;
}