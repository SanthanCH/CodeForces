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
        cin >> n >> m >> x;
        //cout << n << m << x << "\n";
        lli res[n + 1], height[n + 1];

        for (lli i = 0; i < n; i++)
        {
            cin >> height[i];
            //cout << "hello\n";
        }

        set<pair<lli, lli>> s, s1;
        for (i = 0; i < n; i++)
        {
            s.insert({height[i], i + 1});
        }

        int rem = s.size() - m;

        //THIS WONT WORK
        /* int rem=m;
        for(auto it=s.rbegin();it!=s.rend();it++){
            if(rem==0)
            break;
            s1.insert(*it);
            s.erase(it);
            rem--;
        }*/
        while (rem--)
        {
            auto it = s.begin();
            s1.insert(*it);
            s.erase(s.begin());
        }
        k = 1;

        for (auto it = s.begin(); it != s.end(); it++)
        {
            res[it->second] = k;
            k++;
        }
        //m max blocks are in each tower in s set;
        //and remaining are in s1

        for (auto it = s1.rbegin(); it != s1.rend(); it++)
        {
            auto it1 = s.begin();
            s.erase(s.begin());
            pair<lli, lli> p = *it;
            pair<lli, lli> p1 = *it1;
            res[p.second] = res[p1.second];
            s.insert({p.first + p1.first, p1.second});
        }

        auto it = s.end();
        it--;
        auto it1 = s.begin();
        if ((it->first) - (it1->first) > x)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (i = 1; i <= n; i++)
                cout << res[i] << " ";
            cout << "\n";
        }
    }
}
