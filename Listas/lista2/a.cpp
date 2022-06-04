#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int cases, officers = 0, i, untreated = 0;

    cin >> cases;

    while (cases--) {
        cin >> i;

        if(i == -1 && officers == 0) untreated++;
        else officers += i;
    }

    cout << untreated << '\n';
    
    return 0;
}
