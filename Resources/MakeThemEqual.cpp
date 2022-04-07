// Author - Hritik
// Platform - Codechef
// Question - Make Them Equal
// Contest - CodeChef Starters 33 Division 2 (Rated)
// Question Link - https://www.codechef.com/START33B/problems/MTE
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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2)
            {
                odd++;
            }
            else
                even++;
        }
        if (odd == 0 || even == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (odd % 2)
        {
            cout << even << endl;
            continue;
        }
        else
        {
            cout << min(even, odd / 2) << endl;
        }
    }
}