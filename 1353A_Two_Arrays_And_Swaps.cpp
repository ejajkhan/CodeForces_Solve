#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
  
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
         sort(a.begin(), a.end(), greater<int>());;
         sort(b.begin(), b.end(), greater<int>());
        vector<int> temp;
        int hold=0;
        int sum=0;
        int i=0,j=0;
        while(hold<n)
        {
            if(a[i]>=b[j])
            {
                hold++;
                sum=sum+a[i];
                i++;
            }
            else if(b[j]>a[i] && k>0)
            {
                hold++;;
                sum=sum+b[j];
                k--;
                j++;
            }
            else if(b[j]>a[i] && k<=0)
            {
                hold++;
                sum=sum+a[i];
                i++;
            }
        }
        cout<<sum<<endl;
        
    }
    
    
    return 0;
}