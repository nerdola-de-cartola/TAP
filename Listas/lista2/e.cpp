#include <bits/stdc++.h>
using namespace std;

int main(void){
    int test = 1, num_marbles = 1, num_queries = 1, input;
    vector<int> marbles, queries, pos;

    while(true) {
        cin >> num_marbles;
        cin >> num_queries;

        if(num_marbles <= 0 || num_queries <= 0) break;

        for(int i = 0; i < num_marbles; i++) {
            cin >> input;
            marbles.push_back(input);
        }
        
        for(int i = 0; i < num_queries; i++) {
            cin >> input;
            queries.push_back(input);
        }

        pos.assign(num_queries, -1);

        sort(marbles.begin(), marbles.end());

        for(int i = 0; i < num_queries; i++) {
            for(int j = 0; j < num_marbles; j++) {
                if(queries[i] == marbles[j]) {
                    pos[i] = j;
                    break;
                }
            }
        }

        cout << "CASE# " << test << ":\n";

        for(int i = 0; i < num_queries; i++) {
            if(pos[i] == -1) cout << queries[0] << " not found\n";
            else cout << queries[i] << " found at " << pos[i] + 1 << '\n';
        }

        marbles.clear();
        queries.clear();
        test++;
    }
    
    return 0;
}
