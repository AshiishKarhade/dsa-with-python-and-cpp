#include <iostream>
#include <string>
using namespace std;

int main(){

    string s1;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    s1 = "aieou";

    // conversion from uppercase to lowercase with remove edge cases as well
    int no_of_vowels = 0;
    for(int i=0; i<5; i++){ 
        for(int j=0; j<s1.length(); j++){
            if(vowels[i] == s1[j]){
                no_of_vowels += 1;
            }
        }
    }
    cout << no_of_vowels << "\n";

    return 0;
}