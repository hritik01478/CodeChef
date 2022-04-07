// Author - Hritik
// Platform - Codechef
// Question - Broken Life
// Contest - CodeChef Starters 33 Division 2 (Rated)
// Question Link - https://www.codechef.com/START33B/problems/BRKNLIFE

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string str, s;
        cin >> str >> s;
        int j = 0, i = 0;
        for (; i < n || j < m; i++)
        {
            if (str[i] == s[j])
            {
                j++;
            }
            else if (str[i] == '?')
            {
                if (s[j] == 'a')
                {
                    str[i] = 'b';
                }
                else
                {
                    str[i] = 'a';
                }
            }
        }
        if (j == m)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
}