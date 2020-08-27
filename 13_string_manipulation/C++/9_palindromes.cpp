#include <iostream>
#include <string>
using namespace std;


class Palindrome{
    public:
    string s1;
    
    Palindrome(string s1){
        this->s1 = s1;
    }

    bool isPalindrome(string s, int first, int last){
        // BASE CASE
        if(first>=last){
            return true;
        }
        char first_char = s[first];
        char last_char = s[last];
        //cout << first_char << last_char << ";";
        return (first_char==last_char) && isPalindrome(s, ++first, --last);
    }

    bool isPalindrome(string s){
        int l = 0;
        int r = s.length()-1;
        return isPalindrome(s, l, r);
    }

    void print(){
        if(isPalindrome(s1)){
                cout << "Palindrome"<< "\n";
            }
        else{
            cout << "Not Palindrome" << "\n";
        }
    }
};

int main(){

    Palindrome s1 = Palindrome("ashiihsa");
    s1.print();

    return 0;
}