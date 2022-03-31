// Author - Hritik
// Platform - Codechef
// Question - Finding Shoes
// Contest - CodeChef Starters 32 Division 2 (Rated)
// Question Link - https://www.codechef.com/START32B/problems/FINDSHOES

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if ((n - m) > 0)
        {
            cout << n + n - m << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}