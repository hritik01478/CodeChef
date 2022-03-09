// Author - Hritik
// Platform - Codechef
// Question - String Protocol
// Contest - CodeChef Starters 29 Division 2 (Rated)
// Question Link - https://www.codechef.com/START29B/problems/STRP

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ctr = 0;
        for (int i = 0; i < n; i++)
        {
            if ((str[i] == str[i + 1]) && (i != n - 1))
            {
                ctr++;
                i++;
                continue;
            }
            ctr++;
        }
        cout << ctr << endl;
    }
}