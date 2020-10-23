/*Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Input

The only input line contains an integer n.

Output

Print a line that contains all values of n during the algorithm.

Constraints
1≤n≤106
Example

Input:
3

Output:
3 10 5 16 8 4 2 1*/
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
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
            cout<<n<<" ";
        }
        else
        {
            n = n * 3 + 1;
            cout<<n<<" ";
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