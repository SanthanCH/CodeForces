#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli i, j, k, n, m, x, z;
 
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        lli arr[n];
        lli sum = 0;
 
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        lli rem = sum % n;
        cout << rem * (n - rem) << "\n";
    }
}
