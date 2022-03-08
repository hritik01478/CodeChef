// Author - Hritik
// Platform - Codechef
// Question - String Reverse
// Contest - CodeChef Starters 27 Division 2 (Rated)
// Question Link - https://www.codechef.com/START27B/problems/STR_REVERSE

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string str, rev;
        cin >> str;
        rev = str;
        int n = str.length(), i = 0, j = 0, ctr = 0;
        reverse(rev.begin(), rev.end());
        while (i < n)
        {
            if (str[i] == rev[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
                ctr++;
            }
        }
        cout << ctr << endl;
    }
    return 0;
}
