/*Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input

The only input line contains an integer n.

Output

Print n integers: the results.

Constraints
1≤n≤10000
Example

Input:
8

Output:
0
6
28
96
252
550
1056
1848*/

#include <bits/stdc++.h>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define forn(i,a,n) for(int i=a;i<n;i++)
#define ford(i,a,n) for(int i=n;i>=a;i--)
#define len(s) s.length()
#define MAXN 1000001
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
 
void solve()
{
    int k;
    cin>>k;
    for (int i = 1; i <= k; i++)
    {
        ll tot = (ll)i*i;
        ll t = tot*(tot-1LL)/2;
        t -= 4LL*(i-1)*(i-2);
        cout << t << "\n";
    }
    
}
 
int main()
{
fast();
int t;
//cin>>t;
t=1;
while(t--)
  {
    solve();
    return 0;
  }
}