/*
Given a String S of length N, two integers B and C, the task is to traverse characters starting from the beginning, swapping a character with the character after C places from it, i.e. swap characters at position i and (i + C)%N. Repeat this process B times, advancing one position at a time. Your task is to find the final String after B swaps.

Examples: 

Input : S = "ABCDEFGH", B = 4, C = 3;
Output:  DEFGBCAH
Explanation:
         after 1st swap: DBCAEFGH
         after 2nd swap: DECABFGH
         after 3rd swap: DEFABCGH
         after 4th swap: DEFGBCAH
Input : S = "ABCDE", B = 10, C = 6;
Output : ADEBC
Explanation:
         after 1st swap: BACDE
         after 2nd swap: BCADE
         after 3rd swap: BCDAE
         after 4th swap: BCDEA
         after 5th swap: ACDEB
         after 6th swap: CADEB
         after 7th swap: CDAEB
         after 8th swap: CDEAB
         after 9th swap: CDEBA
         after 10th swap: ADEBC
*/

#include <iostream>
using namespace std;
void swapping(string s,int a,int b){
	int n=s.length();
	int t=b%n;
	for(int i=0;i<a;i++){
		swap(s[i],s[i+t]);
	}
	cout<<s;
}
	

int main(){
	string str;
	int a,b;
	cout<<"Enter the string:";
	cin>>str;
	cout<<"Enter the values of B,C:";
	cin>>a>>b;
	swapping(str,a,b);
	
}
