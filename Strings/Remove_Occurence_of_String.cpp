/*
Given a string. Write a program to remove all the occurrences of a character in the string.

Examples: 

Input : s = "geeksforgeeks"
        c = 'e'
Output : s = "gksforgks"

Input : s = "geeksforgeeks"
        c = 'g'
Output : s = "eeksforeeks"
 
Input : s = "geeksforgeeks"
        c = 'k'
Output : s = "geesforgees"
*/


#include <iostream>
using namespace std;
void remove(string s,char c){
	string ans;
	for(int i=0;i<s.length();i++){
		if(s[i]==c){
			continue;
		}
		ans+=s[i];
	}
	cout<<ans;
	
}

int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
	char c;
	cout<<"\nEnter the character that need to be removed:";
	cin>>c;
	remove(str,c);
	
}
