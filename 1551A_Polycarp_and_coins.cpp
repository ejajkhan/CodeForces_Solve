#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=n/3;
        int b=(n/3);
        if(n%3==1){a++;}
        if(n%3==2){b++;}
        cout<<a<<" "<<b<<endl;
    }
    
}