/*You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5*/

#include <bits/stdc++.h>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define len(s) s.length()
#define MAXN 1000001
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;


void solve()
{
    int n,count = 0;
    cin>>n;
    ll x,big=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        big = max(big,x);
        count+=big-x;
    }
    cout<<count;
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