#include<bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p(a) cout<<a<<endl
#define ll long long int
#define srt(a) sort(a.begin(),a.end())
#define srta(a) sort(a.begin(),a.end(),greater<int>())
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c')
        {
            yes;
        }
        else{no;}
    }
    
    return 0;
}