// Author - Hritik
// Platform - Codechef
// Question - Decomposition Reaction
// Contest - CodeChef Starters 29 Division 2 (Rated)
// Question Link - https://www.codechef.com/START29B/problems/DCP

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long int mod = 1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<ll> Q(n);
    for (int i = 0; i < n; i++)
        cin >> Q[i];

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < b; j++)
        {
            ll x, y;
            cin >> x >> y;
            Q[y - 1] = (Q[y - 1] % mod + (x * Q[a - 1]) % mod) % mod;
        }
        Q[a - 1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << Q[i] << endl;
    }
    return 0;
}
