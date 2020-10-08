/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3*/
#include <bits/stdc++.h>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
#define vi vector<int>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define len(s) s.length()
#define MAXN 1000001
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
 
int solve()
{
    string str;
    cin>>str;
    ll n = len(str);
    if(n==0||n==1)
    {
        return 1;
    }
    char arr[n+1];
    strcpy(arr, str.c_str());
    int i = 0,count = 0, max_c = 0;
    while(arr[i]!='\0')
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        
        if(max_c < count)
        {
            max_c = count;
        }
        i++;
    }
    return max_c+1;
}
 
int main()
{
fast();
int t;
//cin>>t;
t=1;
while(t--)
  {
    cout<< solve();
    return 0;
  }
}