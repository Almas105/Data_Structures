#include <iostream>
using namespace std;

int deletion(int a[],int n,int x){
	int pos=-1;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			pos=i;
		}
	}
	if(pos==-1){
		cout<<"Element not found!";
		return 1;
	}
	else {
		for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
		}
	return n-1;
	}
	
}
int main(){
	int a[100],n,x;
	cout<<"\nEnter the number of elements in the array:";
	cin>>n;
	cout<<"\nEnter the elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"The array:";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the element to get deleted";
	cin>>x;
	n=deletion(a,n,x);
	if(n!=1){
		cout<<"The array:";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
	
}
