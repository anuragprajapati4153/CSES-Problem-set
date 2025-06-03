#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long prev = 0;
    long long move = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < prev)
        {
            move += prev - x;
        }
        else
        {
            prev = x;
        }
    }
    cout << move << endl;
    return 0;
}