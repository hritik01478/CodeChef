// Author - Hritik
// Platform - Codechef
// Question - Increase 2 Consecutive Characters
// Contest - CodeChef Starters 29 Division 2 (Rated)
// Question Link - https://www.codechef.com/START29B/problems/CCD

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long int mod = 1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string arr, str;
        cin >> arr >> str;
        vector<pair<int, int>> query(q);
        for (int i = 0; i < q; i++)
        {
            cin >> query[i].first;
            cin >> query[i].second;
        }
        int sum = 0;
        vector<ll> even(n + 1), odd(n + 1);
        for (int i = 0; i < n; i++)
        {
            even[i + 1] = even[i];
            odd[i + 1] = odd[i];
            if (i % 2)
            {
                int x = str[i] - arr[i];
                if (x < 0)
                    odd[i + 1] += x + 26;
                else
                    odd[i + 1] += x;
            }
            else
            {
                int x = str[i] - arr[i];
                if (x < 0)
                    even[i + 1] += x + 26;
                else
                    even[i + 1] += x;
            }
        }

        for (int i = 0; i < q; i++)
        {
            int a = query[i].first;
            int b = query[i].second;
            int p = even[b] - even[a - 1] - odd[b] + odd[a - 1];
            if (p % 26 == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
