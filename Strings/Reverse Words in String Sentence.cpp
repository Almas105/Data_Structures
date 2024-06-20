#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverse(string s){
	stack <string> st;
	string str,ans;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]== ' '){
			st.push(str);
			st.push(" ");
			str="";
			continue;
		}
		str+=s[i];
	}
	st.push(str);
	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}
	return ans;
}
int main()
{
	string s;
	getline(cin,s);
	string ans=reverse(s);
	cout<<ans;
}
