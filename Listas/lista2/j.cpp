#include <bits/stdc++.h>
using namespace std;

bool palindromo(string s);

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while(test--) {
        string s, sa, as;
        cin >> s;

        sa = s + 'a';
        as = 'a' + s;

        if(!palindromo(sa)) {
            cout << "YES\n" << sa << '\n';
        } else if(!palindromo(as)) {
            cout << "YES\n" << as << '\n';
        } else {
            cout << "NO\n";
        }

    }
}

bool palindromo(string s) {
    int p = 0, u = s.size()-1;

    while (p < u) {
        if(s[p] != s[u]) return false;
        p++;
        u--;
    }

    return true;
}