#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while(test--) {
        int total, restantes;
        cin >> total;

        int h1 = 0, h2 = 0, h3 = 0;

        if(total%3 == 0) {
            h1 = total/3;
            h2 = total/3+1;
            h3 = total/3-1;
        } else if(total%3 == 1) {
            h1 = total/3;
            h2 = total/3+2;
            h3 = total/3-1;
        } else {
            h1 = total/3+1;
            h2 = total/3+2;
            h3 = total/3-1;
        }




        if(total%2 != 0) h2 = (total/3) + 2;
        else h2 = (total/3) + 1;
        total -= h2;
        h1 = total/2;
        total -= h1;
        h3 = total;

        cout << h1 << ' ' << h2 << ' ' << h3 << '\n';
    }

    return 0;
}