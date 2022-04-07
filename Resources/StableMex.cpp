// Author - Hritik
// Platform - Codechef
// Question - Stable Mex
// Contest - CodeChef Starters 33 Division 2 (Rated)
// Question Link - https://www.codechef.com/START33B/problems/STBMEX

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<ll> mp;
        vector<ll> arr, v;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            mp.insert(a);
        }
        for (auto i : mp)
        {
            arr.push_back(i);
        }

        sort(arr.begin(), arr.end());
        ll x = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
            {
                x++;
            }
        }
        if (x == 1)
        {
            cout << -1 << endl;
        }
        else if (x == 0)
        {
            cout << arr[0] - 1 << endl;
        }
        else
        {
            ll ctr = 0;
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i] == (arr[i - 1] + 1))
                {
                    ctr++;
                }
                else
                {
                    v.push_back(ctr + 1);
                    ctr = 0;
                }
            }
            v.push_back(ctr + 1);
            ll ans = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] >= x - 1)
                {
                    ans++;
                }
            }
            cout << ans - 1 << endl;
        }
    }
}