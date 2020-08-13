#include <iostream>
#include <map>
using namespace std;

void print(map<int, string> mp){
    for(auto it: mp){
        cout << it.first << '\t' << it.second << '\n'; 
    }
    cout << "\n";
}

int main(){

    map <int, string> mp;

    mp.insert(pair<int, string>(1, "ashish"));
    mp.insert(pair<int, string>(2, "steve"));
    mp.insert(pair<int, string>(3, "john"));
    print(mp);
    return 0;
}