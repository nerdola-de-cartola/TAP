#include <bits/stdc++.h>
using namespace std;

vector<int> heights;

void tryClimb(int ladder, int test) {
    long long int force = 1;
    
    while(true) {
        bool finish = false;
        int pos = 0;
        long long int k = force;
        force++;

        while(!finish) {
            if(pos == ladder - 1) {
                finish = true;
                cout << "Case " << test << ": " << force - 1 << '\n';
                return;
            }

            int jump = heights[pos + 1] - heights[pos]; 

            if(jump > k) {
                finish = true;
            } else if(jump == k) {
                k--;
                pos++;
            } else {
                pos++;
            }
        }
    } 
}

int main(void) {
    int test, ladder, input, c = 1;

    cin >> test;

    while(c <= test) {
        c++;
        cin >> ladder;

        heights.push_back(0);

        for(int i = 0; i < ladder; i++) {
            cin >> input;
            heights.push_back(input);
        }

        tryClimb(ladder, c - 1);
        heights.clear();
    }
}
