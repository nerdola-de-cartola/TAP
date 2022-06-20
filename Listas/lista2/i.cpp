#include <bits/stdc++.h>
using namespace std;

void printLexi(string str, int k);
int choseK(string str);

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin >> test;
    while(test--) {
       int len;
       cin >> len;

       string str;
       cin >> str;
       int k = choseK(str);
       printLexi(str, k);
    }

    return 0;
}

int choseK(string str) {
    int k = 1;

    for(int i = 0; i < str.size(); i++) {
        if(str[k] < str[k-1]) k++;
        else break;
    }

    return k;
}

void printLexi(string str, int k) {
    for(int i = 0; i < k; i++) {
        cout << str[i];
    }

    for(int i = k - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << '\n';
}