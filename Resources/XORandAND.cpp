// Author - Hritik
// Platform - Codechef
// Question - XOR and AND
// Contest - CodeChef Starters 31 Division 2 (Rated)
// Question Link - https://www.codechef.com/START31B/problems/XORAND

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        vector<ll> arr(n);
        ll a[32] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            int x = log2(arr[i]) + 1;
            sum = sum + a[x];
            a[x]++;
        }
        cout << sum << endl;
    }
}