/*Your task is to divide the numbers 1,2,…,n into two sets of equal sum.

Input

The only input line contains an integer n.

Output

Print "YES", if the division is possible, and "NO" otherwise.

After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Constraints
1≤n≤106
Example 1

Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6

Example 2

Input:
6

Output:
NO*/

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
#define fast()                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

using namespace std;

void findsubset(ll n)
{
  if (n <= 2)
  {
    cout << "NO"<< endl;
    return;
  }
  ll sum = n * (n + 1) / 2;
  if (sum % 2 != 0)
  {
    cout << "NO"<<endl;
    return;
  }

  vector<int> v1;
  vector<int> v2;

  if (n % 2 == 0)
  {
    int start = 1;
    int last = n;
    int turn = 1;
    while (start <= last)
    {
      if (turn)
      {
        v1.push_back(start);
        v1.push_back(last);
        turn = 0;
      }
      else
      {
        v2.push_back(start);
        v2.push_back(last);
        turn = 1;
      }

      start++;
      last--;
    }
      cout << "YES"<< endl;
      cout << v1.size()<< endl;
      for (auto c : v1)
      {
        cout << c << " ";
      }
      cout << endl;
      cout << v2.size()<<endl;
      for (auto c : v2)
      {
        cout << c << " ";
      }
      cout << endl;
  }
  else
  {
    ll rem = sum / 2;
    bool ref[n + 1];

    for (int i = 1; i <= n; i++)
      ref[i] = false;

    ref[0] = true;

    for (int i = n; i >= 1; i--)
    {
      if (rem > i)
      {
        v1.push_back(i);
        ref[i] = true;
        rem -= i;
      }

      else
      {
        v1.push_back(rem);
        ref[rem] = true;
        break;
      }
    }
    for (int i = 1; i <= n; i++)
    {
      if (!ref[i])
        v2.push_back(i);
    }

    cout << "YES"<<endl;
    cout << v1.size()<<endl;
    for (auto c : v1)
    {
      cout << c << " ";
    }
    cout << endl;
    cout << v2.size()<<endl;
    for (auto c : v2)
    {
      cout << c << " ";
    }
    cout << endl;
  }
}
void solve()
{
  ll n;
  cin >> n;
  findsubset(n);
}

int main()
{
  fast();
  int t;
  //cin>>t;
  t = 1;
  while (t--)
  {
    solve();
    return 0;
  }
}