#include <iostream>
#include <algorithm>
using namespace std;
string commonprefix(string arr[],int n){
	sort(arr,arr+n);
	string first=arr[0];
	string last=arr[n-1];
	string ans;
	int minimum=min(first.length(),last.length());
	for(int i=0;i<minimum;i++){
		if(first[i]==last[i]){
			ans+=first[i];
		}
		else{
			break;
		}
	}
	if(ans.length()){
		return ans;
	}
	else{
		return "-1";
	}
}
int main(){
	int n;
	string arr[100];
	cout<<"enter the size:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	string ans=commonprefix(arr,n);
	cout<<ans;
}
