// Author - Hritik
// Platform - Codechef
// Question - Increase 2 Consecutive Characters
// Contest - CodeChef Starters 31 Division 2 (Rated)
// Question Link - https://www.codechef.com/START31B/problems/SIGNMOVE

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
        if (n % 2)
        {
            cout << (n / 2 + 1) * (-1) << endl;
        }
        else
        {
            cout << n / 2 << endl;
        }
    }
}