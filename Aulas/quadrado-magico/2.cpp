# include <bits/stdc++.h>
using namespace std;

#define n 7

void printSquare(int m[n][n]);

int main(void) {
    int m[n][n];
    int k, i, j, delta = -1;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }

    for(k = 1; k < (n*n)/2; k++) {
        printSquare(m);
        m[i][j] = k;
      
    for(int a = 0; a < 4; a++) {
       for(int b = 0; b < 8; b++) {
            j = j + delta;
            for(int c = 0; c < 2; c++) {
                i++;
            }
       }

       delta = -delta;
    }
        
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