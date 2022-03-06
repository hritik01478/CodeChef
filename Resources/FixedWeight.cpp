// Author - Hritik
// Platform - Codechef
// Question - Fixed Weight
// Contest - CodeChef Cook-Off Division 2 (Rated)
// Question Link - https://www.codechef.com/COOK139B/problems/FIXWEIGHT

#include <bits/stdc++.h>
using namespace std;
// typedef pair<int, int> ppi;
typedef long long int ll;

map<ll, int> Divisors(ll n, ll x)
{
    map<ll, int> arr;
    for (int i = 1; i <= x; i++)
    {
        if (n % i == 0)
        {

            if (n / i == i)
                arr[i]++;

            else
                arr[i]++;
            arr[n / i]++;
        }
    }
    return arr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        map<ll, int> factors;
        factors = Divisors(x, n);

        map<ll, int>::iterator itr;
        bool flag = true;
        for (itr = factors.begin(); itr != factors.end(); ++itr)
        {
            ll var = x / (itr->first);
            if (var >= 1 && var <= (n - itr->first + 1))
            {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
    }
}