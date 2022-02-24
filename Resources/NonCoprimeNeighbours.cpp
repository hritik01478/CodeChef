// Author - Hritik
// Platform - Codechef
// Question - Non Coprime Neighbours
// Contest - CodeChef Starters 27 Division 2 (Rated)
// Question Link - https://www.codechef.com/START27B/problems/NCOPRIMEN/

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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i += 3)
        {
            if (i + 1 == n)
            {
                continue;
            }
            arr[i + 1] = 2 * arr[i];
            if (i + 2 == n)
            {
                continue;
            }
            arr[i + 2] = 2;
            if (i + 3 < n)
            {
                arr[i + 2] = 2 * arr[i + 3];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
