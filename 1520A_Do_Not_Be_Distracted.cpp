#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<char, int> last_seen;
        bool suspicious = false;
        for (int i = 0; i < n; i++) {
            if (last_seen.count(s[i]) && i - last_seen[s[i]] > 1) {
                suspicious = true;
                break;
            }
            last_seen[s[i]] = i;
        }

        if (suspicious) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}