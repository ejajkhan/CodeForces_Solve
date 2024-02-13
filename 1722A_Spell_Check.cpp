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
        string input,name="Timur";
        int n;
        cin>>n;
        cin>>input;
        srt(input);
        srt(name);
        if(input==name){yes;}
        else{no;}
        
    }
    
    return 0;
}