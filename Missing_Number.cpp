/*You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

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
#define forn(i,n) for(int i=0;i<int(n);i++)
#define len(s) s.length()
#define MAXN 1000001
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
 
void solve()
{
    ll n;
    cin>>n;
    int e;
    int arr[n];
    for(int i = 1;i <= n; i++)
    {
        arr[i]=0;
    }
    for(int i = 1;i <= n; i++)
    {
        cin>>e;
        arr[e] = 1;
    }
    for(int i = 1;i <= n; i++)
    {
        if(arr[i] == 0)
        {
            cout<<i<<"\t";
        }
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