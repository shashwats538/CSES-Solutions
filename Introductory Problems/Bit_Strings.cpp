/*Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input

The only input line has an integer n.

Output

Print the result modulo 10^9+7.

Constraints
1≤n≤106
Example

Input:
3

Output:
8*/
#include <bits/stdc++.h>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;
#define vi vector<int>
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define len(s) s.length()
#define MAXN 1000001
#define MOD 1000000007
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    ll n;
    cin>>n;
    ll ans = 1;
    while(n--)
    {
        ans = (ans * 2) % MOD;
    }
    cout<< ans;
}

int main()
{
    fast();
    int t;
    //cin >> t;
    t = 1;
    while (t--)
    {
        solve();
        return 0;
    }
}