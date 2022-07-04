#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while(test--) {
        string s;
        cin >> s;

        int v[s.size()];
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            v[i] = (s[i] - '0') * pow(10, s.size()-i-1);
            if(v[i] != 0) count++;
        }

        cout << count << '\n';
        for(int i = 0; i < s.size(); i++) {
            if(v[i] != 0) {
                cout << v[i] << ' ';
            }
        }


        cout << '\n';
    }

    return 0;
}