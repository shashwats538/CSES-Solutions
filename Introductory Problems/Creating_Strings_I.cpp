/*Given a string, your task is to generate all different strings that can be created using its characters.

Input

The only input line has a string of length n. Each character is between a–z.

Output

First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.

Constraints
1≤n≤8
Example

Input:
aabac

Output:
20
aaabc
aaacb
aabac
aabca
aacab
aacba
abaac
abaca
abcaa
acaab
acaba
acbaa
baaac
baaca
bacaa
bcaaa
caaab
caaba
cabaa
cbaaa*/

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

void createstr( string test)
{
    sort(begin(test),end(test));
    vector<string> soln;
    do
    {
        soln.push_back(test);
    } while (next_permutation(begin(test),end(test)));
    cout<<soln.size()<<"\n";
    for(auto& a: soln)
    {
        cout<<a<<"\n";
    }    
}
void solve()
{
    string test;
    cin >> test;
    createstr(test);
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
    }
    return 0;
}