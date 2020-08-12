#include <iostream>
#include <stack>
using namespace std;

void print(stack <int> s) { 
    while (!s.empty()){ 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

int main(){
    stack<int> st;
    // PUSHING INTO THE STACK
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    print(st);

    // POPPING OUT OF THE STACK
    st.pop();
    print(st);

    cout << st.top() << "\n";

}
