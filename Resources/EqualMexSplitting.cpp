// Author - Hritik
// Platform - Codechef
// Question - Equal MEX Splitting
// Contest - CodeChef Cook-Off Division 2 (Rated)
// Question Link - https://www.codechef.com/COOK139B/problems/MEXSPLIT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 0)
                one++;
            else
                zero++;
        }
        cout << max(zero, one) << endl;
    }
    return 0;
}
