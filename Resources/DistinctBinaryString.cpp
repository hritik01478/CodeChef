// Author - Hritik
// Platform - Codechef
// Question - Distinct Binary String
// Contest - CodeChef Starters 27 Division 2 (Rated)
// Question Link - https://www.codechef.com/START27B/problems/BINSTRING

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ctr = 1;
        cin >> n;
        string str;
        cin >> str;
        char var = str[0];
        for (int i = 1; i < n; i++)
        {
            if (var != str[i])
            {
                ctr++;
                var = str[i];
            }
        }
        cout << ctr << endl;
    }
    return 0;
}
