#include <iostream>
#include <string>
#include <cctype>
#include <stack>
using namespace std;


class WordReverse{
    public:
    string s1;
    stack <string> stk;

    WordReverse(string s1){
        this->s1 = s1;
        string chk; //chuck
        for(int i=0; i<s1.length(); i++){
            if(!isspace(s1.at(i))){
                chk += s1[i];
            }
            else{   
                chk = "";
                //cout << chk <<"\n";
                stk.push(chk);   
            }
        }
    }

    void reverse(){
        while(!stk.empty()){
            string p = stk.top();
            stk.pop();
            cout << p << " ";
        }
        cout << "\n";
    }
};

int main(){

    WordReverse sr = WordReverse("Ashiish is the current DSC Lead");
    cout << sr.s1 << "\n";
    cout << sr.stk.top();
    sr.reverse();

    return 0;
}