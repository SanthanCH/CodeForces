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
        lli a, b;
        cin >> a >> b;
        lli ans = abs(a - b);
        if (ans == 0)
        {
            cout << "0 0\n";
            continue;
        }
        lli ans1 = a % ans;
        ans1 = min(ans1, abs(ans - ans1));
        cout << ans << " " << ans1 << "\n";
    }
}
