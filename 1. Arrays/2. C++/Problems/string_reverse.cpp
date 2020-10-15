#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int a = s.length();
	    for(int i=a-1;i>=0;i--)
	    {
	        cout<<s[i];
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
