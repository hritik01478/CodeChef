// Author - Hritik
// Platform - Codechef
// Question - Increase 2 Consecutive Characters
// Contest - CodeChef Starters 31 Division 2 (Rated)
// Question Link - https://www.codechef.com/START31B/problems/ALTSTR/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ctr = 0, len = 0;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
                ctr++;
            else
                len++;
        }
        if (ctr == len)
        {
            cout << n << endl;
        }
        else
        {
            cout << 2 * min(ctr, len) + 1 << endl;
        }
    }
}