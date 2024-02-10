#include<bits/stdc++.h>
using namespace std;

int charToNumber(char c)
{
    int result = c - '0';
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int leftSide=charToNumber(s[0])+charToNumber(s[1])+charToNumber(s[2]);
        int rightSide=charToNumber(s[3])+charToNumber(s[4])+charToNumber(s[5]);
        if(leftSide==rightSide)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}