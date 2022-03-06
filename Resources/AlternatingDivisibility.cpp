// Author - Hritik
// Platform - Codechef
// Question - Alternating Divisibility
// Contest - CodeChef Cook-Off Division 2 (Rated)
// Question Link - https://www.codechef.com/COOK139B/problems/ALTERNATEDIV

#include <bits/stdc++.h>
using namespace std;
// typedef pair<int, int> ppi;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int arr[n];
        if (n == 1)
        {
            cout << 2 << endl;
            continue;
        }
        for (int i = 0; i < n; i += 2)
        {
            arr[i] = i + 1;
            if (i + 1 < n)
                arr[i + 1] = 2 * (i + 1);
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}