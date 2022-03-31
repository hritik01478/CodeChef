// Author - Hritik
// Platform - Codechef
// Question - The Unchanging OR
// Contest - CodeChef Starters 31 Division 2 (Rated)
// Question Link - https://www.codechef.com/START31B/problems/UNCHANGEDOR

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
        ll x = 1, ctr = n;
        for (int i = 0;; i++)
        {
            x = powl(2, i);
            if (x <= n)
            {
                ctr--;
            }
            else
                break;
        }
        cout << ctr << endl;
    }
}