#include <iostream>
#include <queue>
using namespace std;

void print(priority_queue<int> q){
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout << "\n";
}

void print2(priority_queue<int, vector<int>, greater<int> > q){
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout << "\n";
}

int main(){
    // priority is default for larger numbers
    priority_queue<int> pq;

    // priority queue for priority of smaller numbers
    priority_queue<int, vector<int>, greater<int> > pq2;

    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    print(pq);
    pq.pop();
    print(pq);

    cout << "PQ2" << "\n";
    pq2.push(5);
    pq2.push(2);
    pq2.push(10);
    pq2.push(8);

    print2(pq2);
    pq2.pop();
    print2(pq2);
    return 0;
}