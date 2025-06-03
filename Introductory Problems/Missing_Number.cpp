#include <bits/stdc++.h>
// #define "\n" endl;
using namespace std;

// driver code
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    long long total_sum = 1LL * n * (n + 1) / 2;
    // subtract all numbers then you will remain with missing one
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        total_sum -= x;
    }
    cout << total_sum << endl;
    return 0;
}