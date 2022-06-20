#include <bits/stdc++.h>
using namespace std;

vector<int> heights;

long long int biggestJump(void) {
    long long int biggest_jump = heights[1] - heights[0], jump;

    for(int i = 2; i < heights.size(); i++) {
        jump = heights[i] - heights[i-1]; 
        if(jump > biggest_jump) biggest_jump = jump;    
    }

    for(int i = 0; i < heights.size(); i++) {
        if(heights[i] == biggest_jump);
    }

    return biggest_jump;
}

void tryClimb(int ladder, int test) {
    long long int force = biggestJump();
    
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
