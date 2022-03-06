// Author - Hritik
// Platform - Codechef
// Question - James At Fruit Market
// Contest - CodeChef Cook-Off Division 2 (Rated)
// Question Link - https://www.codechef.com/COOK139B/problems/JMARKET

#include <bits/stdc++.h>
using namespace std;
// typedef pair<int, int> ppi;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a[3];
        cin >> x;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        int ans = (x - 1) * a[0] + a[1];
        cout << ans << endl;
    }
}