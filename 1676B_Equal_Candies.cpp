#include<bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p(a) cout<<a<<endl
#define ll long long int
#define srt(a) sort(a.begin(),a.end())
#define srta(a) sort(a.begin(),a.end(),greater<int>())
#define geti(n) int n;cin>>n
#define getarr(arr,n) int arr[n];for(int counter=0;counter<n;counter++){cin>>arr[counter];}
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        geti(n);
        int arr[n];
        int mini=99999999;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<mini){mini=arr[i];}
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=mini)
            {
                sum=sum+arr[i]-mini;
            }
        }
        p(sum);


    }
    
    return 0;
}