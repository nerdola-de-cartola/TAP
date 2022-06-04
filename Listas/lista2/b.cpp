#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int queue_size, distress = 0;
    long long int ice_cream, input;
    char signal;

    cin >> queue_size;
    cin >> ice_cream;

    while(queue_size--) {
        cin >> signal;
        cin >> input;

        if(signal == '+') ice_cream += input;
        else if(signal == '-' && input > ice_cream) distress++;
        else ice_cream -= input;
    }

    cout << ice_cream << ' ' << distress << '\n';
    
    return 0;
}
