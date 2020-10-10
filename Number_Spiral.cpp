/*A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints
1≤t≤105
1≤y,x≤109
Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/
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
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll mx = max(x, y);
    if (mx % 2 == 1)
    {
        if (y == mx)
            cout << mx * mx - x + 1;
        else
            cout << (mx - 1) * (mx - 1) + y;
    }
    else
    {
        if (x == mx)
            cout << mx * mx - y + 1;
        else
            cout << (mx - 1) * (mx - 1) + x;
    }
    cout << "\n";
}

int main()
{
    fast();
    int t;
    cin >> t;
    //t=1;
    while (t--)

    {
        solve();
    }
    return 0;
}