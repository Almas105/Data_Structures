/*
Program to print all substrings of a given string
Last Updated : 08 Dec, 2023
Given a string as an input. We need to write a program that will print all non-empty substrings of that given string.

Examples : 

Input :  abcd
Output :  a 
          b
          c
          d
          ab
          bc
          cd
          abc
          bcd
          abcd
*/

#include <iostream>
using namespace std;
void generate(string s){
	for(int i=0;i<s.length();i++){
		for(int j=1;j<=s.length()-i;j++){
			cout<<s.substr(i,j)<<" ";
		}
	}
}
int main(){
	string str;
	cout<<"Enter the String:";
	cin>>str;
	generate(str);
}
