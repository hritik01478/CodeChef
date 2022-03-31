// Author - Hritik
// Platform - Codechef
// Question - Training Plans
// Contest - CodeChef Starters 32 Division 2 (Rated)
// Question Link - https://www.codechef.com/START32B/problems/TRAINPLN

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].second;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
        }
        priority_queue<ll> q;
        int i = 0;
        double sum = 0, avg = 0, result = 0;
        sort(arr.begin(), arr.end());
        for (int j = 0; j < n; j++)
        {
            for (; i < n; i++)
            {
                if (arr[i].first == j)
                {
                    q.push(arr[i].second);
                    continue;
                }
                break;
            }
            if (q.empty())
                break;
            sum = sum + q.top();
            q.pop();
            avg = sum / (j + 1);
            result = max(result, avg);
        }
        printf("%0.6f", result);
        cout << "\n";
    }
}