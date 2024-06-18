/*
Generate all binary strings without consecutive 1’s
Last Updated : 08 Dec, 2023
Given an integer, K. Generate all binary strings of size k without consecutive 1’s.

Examples: 

Input : K = 3  
Output : 000 , 001 , 010 , 100 , 101 
Input : K  = 4 
Output :0000 0001 0010 0100 0101 1000 1001 1010

*/
#include <iostream>

using namespace std;

void generateuntil(int n,char str[],int k){
	if(n==k){
		str[n]='\0';
		cout<<str<<"\t";
		return;
	}
	if(str[k-1]=='1'){
		str[k]='0';
		generateuntil(n,str,k+1);
	}
	if(str[k-1]=='0'){
		str[k]='0';
		generateuntil(n,str,k+1);
		str[k]='1';
		generateuntil(n,str,k+1);
	}
}
int generatestring(int n){
	char str[n];
	str[0]='0';
	generateuntil(n,str,1);
	str[0]='1';
	generateuntil(n,str,1);
}
int main(){
	int n;
	cout<<"\nEnter the value:";
	cin>>n;
	generatestring(n);
}
