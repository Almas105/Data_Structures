/*
Given a binary string, find if it is possible to make all its digits equal (either all 0’s or all 1’s) by flipping exactly one bit. 

Input: 101
Output: Ye
Explanation: In 101, the 0 can be flipped to make it all 1

Input: 11
Output: No
Explanation: No matter whichever digit you flip, you will not get the desired string.

Input: 1
Output: Yes
Explanation: We can flip 1, to make all 0’s
*/


#include <iostream>
using namespace std;
char flip(char c)
{
	if(c=='0'){
		return '1';
	}
	else{
		return '0';
	}
}
int function(string s,char expected){
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]!=expected)
		{
			count++;
		}
		expected=flip(expected);
	}
	return count;
}

int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
	int count=min(function(str,'0'),function(str,'1'));
	cout<<count;
}
