/*You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.

Input

The first input line has an integer t: the number of tests.

After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output

For each test, print "YES" if you can empty the piles and "NO" otherwise.

Constraints
1≤t≤105
0≤a,b≤109
Example

Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES*/

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
    ll a, b;
    cin>>a>>b;
    if(b>2*a || a>2*b || (a+b)%3)
    cout<<"NO\n";
    else
    cout<<"YES\n";
}

int main()
{
    fast();
    int t;
    cin>>t;
    //t = 1;
    while (t--)
    {
        solve();
    }
}