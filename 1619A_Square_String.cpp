#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        if (len % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            
            int flag = 0;
            for (int i = 0; i < (len / 2); i++)
            {
                if (s[i] != s[i+len/2])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}