/*Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input

The only input line has a string of length n consisting of characters A–Z.

Output

Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example

Input:
AAAACACBA

Output:
AACABACAA*/

#include <bits/stdc++.h>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;
#define vi vector<int>
#define ll long long
#define f first
#define s second
#define forn(i, n) for (int i = 0; i < n; i++)
#define len(s) s.length()
#define MAXN 1000001
#define MOD 1000000007
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

string findpal(string test)
{
    unordered_map<char,int> hmap;
    for(int i = 0;i < test.length(); i++)
    hmap[test[i]]++;

    int oddcount = 0;
    char oddchar;
    for(auto x: hmap)
    {
        if(x.s % 2 != 0)
        {
            oddcount++;
            oddchar = x.f;
        }
    }

    if (oddcount > 1 || oddcount == 1 &&  test.length() % 2 == 0) 
    return "NO SOLUTION";

    string firsthalf = "", secondhalf = "";

    for(auto x: hmap)
    {
        string s(x.s / 2, x.f);
        firsthalf = firsthalf + s;
        secondhalf = s + secondhalf;
    }

    if(oddcount == 1)
    return firsthalf + oddchar + secondhalf;
    else
    {
        return firsthalf + secondhalf;
    }
    
}
void solve()
{
    string test;
    cin>>test;
    cout<<findpal(test);
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
}