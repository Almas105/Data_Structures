/*Given a string of size n, write functions to perform the following operations on a string-

Left (Or anticlockwise) rotate the given string by d elements (where d <= n)

Right (Or clockwise) rotate the given string by d elements (where d <= n).
Examples: 

Input : s = "GeeksforGeeks"
        d = 2
Output : Left Rotation  : "eksforGeeksGe" 
         Right Rotation : "ksGeeksforGee"  
Input : s = "qwertyu" 
        d = 2
Output : Left rotation : "ertyuqw"
         Right rotation : "yuqwert"
*/

#include <iostream>
using namespace std;
string leftrotation(string s,int n){
	string str;
	for(int i=n;i<s.length();i++){
		str+=s[i];
	}
	for(int i=0;i<n;i++){
		str+=s[i];
	}
	return str;
}
string rightrotation(string s,int n){
	string str;
	for(int i=s.length()-n;i<s.length();i++){
		str+=s[i];
	}
	for(int i=0;i<s.length()-n;i++){
		str+=s[i];
	}
	return str;
}
int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
	int n;
	cout<<"Enter the rotation index:";
	cin>>n;
	string ans=leftrotation(str,n);
	string ans1=rightrotation(str,n);
	cout<<"\nLeft Rotation:"<<ans<<"\n"<<"Right Rotation:"<<ans1;
}
