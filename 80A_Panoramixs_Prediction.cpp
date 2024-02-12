#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int *myArray = new int[15]{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int i = 0; i < 15; i++)
    {
        if (myArray[i] == n)
        {
            if (i != 14)
            {
                if (myArray[i + 1] == m)
                {
                    cout << "YES" << endl;
                    return 0;
                }
                else
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}