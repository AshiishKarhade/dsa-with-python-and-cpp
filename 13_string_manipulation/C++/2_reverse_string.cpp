#include <iostream>
#include <string>
#include <stack>
using namespace std;


class StringReverse{
    public:
    string s1;
    stack <char> stk;
    
    StringReverse(string s1){
        this->s1 = s1;
    }

    void reverse(){
        for(int i=0; i<s1.length(); i++){
            stk.push(s1[i]);
        }
        string reversed;
        while(!stk.empty()){
            char p = stk.top();
            stk.pop();
            reversed = reversed + p;
        }
        cout << reversed << "\n";
    }
};

int main(){

    StringReverse sr = StringReverse("ashiish");
    sr.reverse();

    return 0;
}