#include<bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p(a) cout<<a<<endl
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int h,m;
       cin>>h>>m;
       int calculated_minute=((24-h)*60)-m;
       p(calculated_minute);
    }
    
    return 0;
}