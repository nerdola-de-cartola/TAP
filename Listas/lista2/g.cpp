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

        for(int i = 0; i < str.size() - 1; i++) {
            tmp.insert(0, 1, str[i]);
            tmp.insert(1, 1, str[i + 1]);
            matrix_digits.push_back(tmp);
            tmp.clear();
        }

        sum = 0;
        for(int i = 0; i < matrix_digits.size(); i++) {
            sum += stoi(matrix_digits[i]);
        }

        cout << sum << '\n';
    }
    
    return 0;
}
