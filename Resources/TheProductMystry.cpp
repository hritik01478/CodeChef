// Author - Hritik
// Platform - Codechef
// Question - The Product Mystry
// Contest - CodeChef Starters 27 Division 2 (Rated)
// Question Link - https://www.codechef.com/START27B/problems/PRODUCT

#include <iostream>
using namespace std;
typedef long long int ll;
ll gcd(ll b, ll c)
{
    if (c == 0)
        return b;

    return gcd(c, b % c);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll b, c;
        cin >> b >> c;
        ll a = gcd(max(b, c), min(b, c));
        cout << c / a << endl;
    }
    return 0;
}
