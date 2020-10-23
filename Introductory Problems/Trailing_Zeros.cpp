/*Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input

The only input line has an integer n.

Output

Print the number of trailing zeros in n!.

Constraints
1≤n≤109
Example

Input:
20

Output:
4*/

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


void findZeroes(ll n)
{
    int count=0;
    while(n)
    {
        n = n / 5;
        count += n;
    }
    cout<<count;
}
void solve()
{
    ll n;
    cin>>n;
    findZeroes(n);
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