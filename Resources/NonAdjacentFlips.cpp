// Author - Hritik
// Platform - Codechef
// Question - Non Adjacent flips
// Contest - CodeChef Starters 33 Division 2 (Rated)
// Question Link - https://www.codechef.com/START33B/problems/NONADJFLIP

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
        bool flag = true;
        if (n == 1)
        {
            if (str[0] == '0')
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
            continue;
        }
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                zero++;
            }
            else
                one++;
        }
        if (one == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                if (str[i] == '1')
                    flag = false;
            }
        }
        if (flag)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}