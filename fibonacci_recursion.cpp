#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 7;
long long arr[N];

long long fin(long long n)
{
    if (n <= 1)
        return 1;
    if (arr[n] != -1)
    {
        return arr[n];
    }
    long long ans = fin(n - 1) + fin(n - 2);
    arr[n] = ans;
    return ans;
}

int main()
{
    long long n;
    cin >> n;

    for (long long i = 0; i <= n; i++)
    {
        arr[i] = -1;
    }

    // cout << (n - 1) + (n - 2) << endl;
    cout << fin(n) << endl;
    return 0;
}