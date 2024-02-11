#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    map<char, int> mp;
    string s = "codeforces";
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        if (mp[c])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}