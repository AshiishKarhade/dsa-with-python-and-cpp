#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverse_string(string s){
    stack <char> st;
    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }
    
    for(int i=0; i<s.length(); i++){
        s[i] = st.top();
        st.pop();
    }
    cout << s << endl;
}
int main(){ 
    string s;
    s = "ashiish";
    reverse_string(s);
    return 0;
}