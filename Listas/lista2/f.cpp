#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int prev;
    int next;
} person;

vector<person> q;
vector<int> rq;
bool isNext[1000000];
bool isPrev[1000000];

void input();
void printQueue();
int first();
int last();
void pairException(int valor_chave, int pos_procurada);
void oddException(int valor_chave, int pos_procurada);
void positionQueue(int valor_chave, int pos_procurada);


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    input();

    positionQueue(0, 1);
    if(q.size() % 2 == 0) {
        pairException(0, q.size() - 2);
    } else {
        oddException(first(), 0);
    }

    printQueue();
    
    return 0;
}

void input() {
    int queue_size;
    person input;
    cin >> queue_size;

    for(int i = 0; i < queue_size; i++) {
        cin >> input.prev;
        cin >> input.next;
        q.push_back(input);
    }

    rq.assign(q.size(), -1);
}

void printQueue() {
    for(int i = 0; i < rq.size(); i++) {
        cout << rq[i] << ' ';
    }

    cout << '\n';
}

int first() {
    for(int i = 0; i < q.size(); i++) {
        isNext[q[i].next] = true;
    }

    for(int i = 0; i < q.size(); i++) {
        if(!isNext[q[i].prev]) return q[i].prev;
    }

    return -1;
}

int last() {
    for(int i = 0; i < q.size(); i++) {
        isPrev[q[i].prev] = true;
    }

    for(int i = 0; i < q.size(); i++) {
        if(!isPrev[q[i].next]) return q[i].next;
    }

    return -1;
}

void pairException(int valor_chave, int pos_procurada) {
    if(pos_procurada < 0) return;

    for(int i = 0; i < q.size(); i++) {
        if(q[i].next == valor_chave) {
            rq[pos_procurada] = q[i].prev;
            pairException(q[i].prev, pos_procurada - 2);
            return;
        }
    }
}  

void oddException(int valor_chave, int pos_procurada) {
    if(pos_procurada > q.size()) return;

    for(int i = 0; i < q.size(); i++) {
        if(q[i].prev == valor_chave) {
            rq[pos_procurada] = q[i].prev;
            oddException(q[i].next, pos_procurada + 2);
            return;
        }
    }

    rq[q.size() - 1] = last();
}

void positionQueue(int valor_chave, int pos_procurada) {
    if(pos_procurada > q.size()) return;

    for(int i = 0; i < q.size(); i++) {
        if(q[i].prev == valor_chave) {
            rq[pos_procurada] = q[i].next;
            positionQueue(q[i].next, pos_procurada + 2);
            return;
        }
    }
}
