// Author - Hritik
// Platform - Codechef
// Question - Plusle and Minun of Array
// Contest - CodeChef Starters 29 Division 2 (Rated)
// Question Link - https://www.codechef.com/START29B/problems/PMA

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr[i] = abs(x);
            if (i % 2 == 0)
            {
                sum = sum + arr[i];
            }
            else
                sum = sum - arr[i];
        }
        // cout << sum << endl;
        ll mi = arr[0], mx = arr[1];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (mi > arr[i])
                {
                    mi = arr[i];
                }
            }
            else
            {
                if (mx < arr[i])
                {
                    mx = arr[i];
                }
            }
        }
        if (mx > mi)
        {
            sum = sum + (2 * mx) - (2 * mi);
        }
        cout << sum << endl;
    }
    return 0;
}
