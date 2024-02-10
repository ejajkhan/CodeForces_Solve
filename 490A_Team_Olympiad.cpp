#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==1){a.push_back(i+1);}
        if(temp==2){b.push_back(i+1);}
        if(temp==3){c.push_back(i+1);}
    }
    int result=min(a.size(),min(b.size(),c.size()));
    if(result==0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<result<<endl;
        for(int i=0;i<result;i++)
        {
            cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
        }
    }
    
}