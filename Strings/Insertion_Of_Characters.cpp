/*
Given a string str and an array of indices chars[] that describes the indices in the original string where the characters will be added. For this post, let the character to be inserted in star (*). Each star should be inserted before the character at the given index. Return the modified string after the stars have been added.

Examples:

Input: str = “geeksforgeeks”, chars = [1, 5, 7, 9]
Output: g*eeks*fo*rg*eeks
Explanation: The indices 1, 5, 7, and 9 correspond to the bold characters in “geeksforgeeks”.

Input: str = “spacing”, chars = [0, 1, 2, 3, 4, 5, 6]
Output: “*s*p*a*c*i*n*g”
*/

#include <iostream>
using namespace std;
void insertion(string s,int n,int arr[]){
	
		for(int i=0;i<n;i++){
			s.resize(s.length()+n,' ');
			int pos=arr[i]+i;
			
			for(int j=s.length()-2;j>=pos;j--){
				s[j+1]=s[j];
				
			}
			s[pos]='*';
			
		}
	for(int i=0;i<=s.length();i++){
		cout<<s[i];
	}

}
	

int main(){
	string str;
	int n,arr[100];
	cout<<"Enter the string:";
	cin>>str;
	cout<<"\nEnter the size of array:";
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertion(str,n,arr);
	
}
