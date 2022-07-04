#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test, str_size, max_op, sum = 0;
    string str, tmp;
    vector<string> matrix_digits;

    cin >> test;

    while(test--) {
        cin >> str_size;
        cin >> max_op;
        cin >> str;

        if(str[str_size-1] == '0') {
            int u1;
            for(int i = str_size-1; i >= 0 ; i--) {
                if(str[i] == '1') {
                    u1 = i;
                    break;
                }
            }

            if(max_op >= str_size - u1) {
                str[str_size - 1] = '1';
                str[u1] = '0';
                max_op -= str_size - u1;
            }
        }

        if(str[0] == '0') {
            int p1;
            for(int i = 0; i < str_size; i++) {
                if(str[i] == '1') {
                    p1 = i;
                    break;
                }
            }

            if(max_op >= p1) {
                str[0] = '1';
                str[p1] = '0';
                max_op -= p1;
            }
        }

        int sum = 0;
        for(int i = 0; i < str_size-1; i++) {
            sum += ((str[i]-'0')*10) + (str[i+1]-'0');
        }

        cout << sum << '\n';
    }
    
    return 0;
}
