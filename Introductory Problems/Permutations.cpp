#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        return 0;
    }
    while (temp >= 1)
    {
        cout << temp << " ";
        temp -= 2;
    }
    temp = n - 1;
    while (temp >= 1)
    {
        cout << temp << " ";
        temp -= 2;
    }
    return 0;
}