#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s1, s2, s3, s4;
        vector<int> a(4);
        cin >> s1 >> s2 >> s3 >> s4;
        a[0] = s1;
        a[1] = s2;
        a[2] = s3;
        a[3] = s4;
        sort(a.begin(), a.end(), greater<int>());
        int n = max(s1, s2);
        int m = max(s3, s4);
        if ((a[0] == n && a[1] == m) || (a[0] == m && a[1] == n))
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}