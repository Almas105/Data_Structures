/*
Given a string of lowercase characters from ‘a’ – ‘z’. We need to write a program to print the characters of this string in sorted order.

Examples: 

Input : bbccdefbbaa 
Output : aabbbbccdef
Input : geeksforgeeks
Output : eeeefggkkorss
*/


#include <iostream>
using namespace std;
void sorting(string s){
	int ch=26;
	int arr[ch]={0};
	string ans;
	for(int i=0;i<s.length();i++){
		arr[s[i]-'a']++;
	}
	for(int i=0;i<ch;i++){
		for(int j=0;j<arr[i];j++){
			cout<<(char)('a'+i);
		}
	}
	
}

int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
	sorting(str);
	
}
