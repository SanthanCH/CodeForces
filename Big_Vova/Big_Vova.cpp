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
        lli ma = 0, ind = 0;
 
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (ma < arr[i])
            {
                ma = arr[i];
                ind = i;
            }
        }
        arr[ind] = arr[0];
        arr[0] = ma;
        lli currgcd = arr[0];
        for (i = 1; i < n - 1; i++)
        {
            if (currgcd == 1)
                break;
            lli gcd = 1, ind1 = i;
            for (j = i; j < n; j++)
            {
                x = __gcd(currgcd, arr[j]);
                if (x > gcd)
                {
                    gcd = x;
                    ind1 = j;
                }
            }
            currgcd = gcd;
            swap(arr[i], arr[ind1]);
        }
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
}
