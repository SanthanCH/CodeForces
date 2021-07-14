#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli i, j, k, n, m, x;

    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        map<int, int> m;
        lli arr[200006];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        for (i = 0; i < n; i++)
        {
            lli rem = arr[i] % k;
            lli need = k - rem;
            if (need != k)
                m[need]++;
        }
        lli mi = 0, rem = -1;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second >= mi)
            {
                mi = it->second;
                rem = it->first;
            }
        }
        if (mi == 0)
            cout << "0\n";
        else
        {
            cout << (mi - 1) * k + rem + 1 << "\n";
        }
    }
}
