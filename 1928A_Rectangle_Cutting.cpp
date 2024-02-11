#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (min(a, b) == 1)
        {
            cout << "NO" << endl;
        }
        else if (a % 2 == 1 && b % 2 == 1)
        {
            cout << "YES" << endl;
        }
        // If both sides are even, we can form another rectangle
        else if (a % 2 == 0 && b % 2 == 0)
        {
            cout << "YES" << endl;
        }
        // If one side is odd and the other is even, we need to check if they are divisible by each other
        else
        {
            // Swap to make sure a is the odd side
            if (a % 2 == 0)
            {
                swap(a, b);
            }
            // Check if b is divisible by a
            if (b % a == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}