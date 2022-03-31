// Author - Hritik
// Platform - Codechef
// Question - Flip Sorting
// Contest - CodeChef Starters 32 Division 2 (Rated)
// Question Link - https://www.codechef.com/START32B/problems/FLIPSORT

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
        string str;
        cin >> str;
        char c = '0';
        int ctr = 0;
        vector<pair<int, int>> arr;
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == c)
            {
                ctr++;
                arr.push_back({1, i + 1});
                if (c == '0')
                {
                    c = '1';
                }
                else
                    c = '0';
            }
        }
        cout << ctr << endl;
        for (int i = 0; i < ctr; i++)
        {
            cout << arr[i].first << " " << arr[i].second << endl;
        }
    }
    return 0;
}
