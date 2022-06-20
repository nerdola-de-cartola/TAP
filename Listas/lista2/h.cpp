#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int number;
    int owner;
}kid;

bool validate(int n, kid * a);
bool generate(int n, kid * a);

kid * shoes;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while(test--) {
        int students;
        cin >> students;
        shoes = (kid *) calloc(students, sizeof(kid));
        kid p[students];

        for(int i = 0; i < students; i++) {
            cin >> shoes[i].number;
            shoes[i].owner = i+1;
            p[i] = shoes[i];
        }

        if(generate(students, p)) {
            for(int i = 0; i < students; i++) {
                cout << p[i].owner << ' ';
            }
            cout << '\n';
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}

bool generate(int n, kid * a) {
    int c[n];
    int i;
    kid tmp;

    for(i = 0; i < n; i++) {
        c[i] = 0;
    }

    i = 0;
    while(i < n) {
        if(c[i] < i) {
            if(i%2 != 0) {
                tmp = a[0];
                a[0] = a[i];
                a[i] = tmp;
            } else {
                tmp = a[c[i]];
                a[c[i]] = a[i];
                a[i] = tmp;
            }

            if(validate(n, a)) return true;
            c[i]++;
            i = 0;
        } else {
            c[i] = 0;
            i++;
        }
    }

    return false;
}

bool validate(int n, kid * a) {
    for(int i = 0; i < n; i++) {
        if(a[i].owner == i+1) return false;
        if(a[i].number > shoes[i].number) return false;
    }

    return true;
}