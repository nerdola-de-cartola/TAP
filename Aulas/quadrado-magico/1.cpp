# include <bits/stdc++.h>
using namespace std;

#define n 7

void printSquare(int m[n][n]);

int main(void) {
    int m[n][n];
    int k, i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }

    for(k = 1, i = 0, j = 3; k < n*n; k++) {
        printSquare(m);
        m[i][j] = k;

        if(k%7 == 0) {
            i++;
            continue;
        } 

        i = (i+n-1) % n;
        j = (j+1) % n;
    }

    return 0;
}

void printSquare(int m[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << '\n';
}