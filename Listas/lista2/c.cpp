#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str_num;
    bool start = false;
    int pos_ini;

    cin >> str_num;

    if(str_num[0] == '9') pos_ini = 1;
    else pos_ini = 0;

    for(int i = pos_ini; i < str_num.size(); i++) {
        if(str_num[i] >= '5') {
            str_num[i] = '9' - str_num[i] + '0';
        }
    }

    cout << str_num << '\n';

    return 0;
}
