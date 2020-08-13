#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main(){
    queue <int> q;
    // PUSH
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    print(q);
    // POP
    q.pop();
    print(q);

    cout << q.size() << "\n";

    return 0;
}