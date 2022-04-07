// Author - Hritik
// Platform - Codechef
// Question - Distinct Dilema
// Contest - CodeChef Starters 33 Division 2 (Rated)
// Question Link - https://www.codechef.com/START33B/problems/DISTDILEM

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
        vector<ll> arr(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        int i;
        for (i = 1; sum > 0; i++)
        {
            sum = sum - i;
            if (sum == 0)
            {
                break;
            }
            if (sum < 0)
            {
                i--;
                break;
            }
        }
        cout << i << endl;
    }
}