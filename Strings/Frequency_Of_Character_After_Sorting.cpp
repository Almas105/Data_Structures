/*
Given a string str, the task is to print the frequency of each of the characters of str in alphabetical order.
Example: 

Input: str = “aabccccddd” 
Output: a2b1c4d3 
Since it is already in alphabetical order, the frequency 
of the characters is returned for each character. 
Input: str = “geeksforgeeks” 
Output: e4f1g2k2o1r1s2 
*/


#include <iostream>
using namespace std;
void sorting(string s){
	int ch=26;
	int arr[ch]={0};
	for(int i=0;i<s.length();i++){
		arr[s[i]-'a']++;
	}
	for(int i=0;i<ch;i++){
		if(arr[i]==0){
			continue;
		}
		cout<<(char)('a'+i)<<arr[i];
	}
}
	

int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
	sorting(str);
	
}
