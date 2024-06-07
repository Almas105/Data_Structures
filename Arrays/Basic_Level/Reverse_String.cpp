
#include<iostream>
using namespace std;
string reverseWord(string str)
    {
    string ans;
    int n=str.length();
       for(int i=n-1;i>=0;i--){
           ans+=str[i];
       }
       return ans;
    }
int main() {
	
	int t;
	cout<<"Enter the size:";
	cin>>t;
	string s;
	cout<<"Enter the string:";
	while(t--)
	{	
    	cin >> s;	
	}
	string a;
    a=reverseWord(s);
	while(t--){
	}
	cout<<a;
	return 0;
	
}


// } Driver Code Ends
