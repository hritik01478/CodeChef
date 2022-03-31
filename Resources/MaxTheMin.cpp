// Author - Hritik
// Platform - Codechef
// Question - Maximize the Minimum
// Contest - CodeChef Starters 32 Division 2 (Rated)
// Question Link - https://www.codechef.com/START32B/problems/MAXTHEMIN

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, mini = 0, x = -1;
        cin >> n >> m;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < mini)
            {
                mini = arr[i];
                x = i;
            }
        }
        sort(arr.begin(), arr.end());
        ll ans = arr[min(m, n - 1)];
        cout << ans << endl;
    }
}