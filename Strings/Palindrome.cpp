/*
 string is said to be palindrome if the reverse of the string is the same as the string. For example, “abba” is a palindrome because the reverse of “abba” will be equal to “abba” so both of these strings are equal and are said to be a palindrome, but “abbc” is not a palindrome.
*/
#include <iostream>
using namespace std;

int main()
{
	string str,ans;
	cout<<"\nEnter the string:";
	cin>>str;
	for(int i=str.length()-1;i>=0;i--)
	{
		ans+=str[i];
	}
	if(ans==str){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not a Palindrome"<<endl;
	}
}
