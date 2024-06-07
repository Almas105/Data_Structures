#include <iostream>
using namespace std;

int main(){
	int a[100],n,element,pos,del,loc;
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
	cout<<"\nEnter the element to get inserted and also the position:";
	cin>>element>>pos;
	for(int i=n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=element;
	cout<<"The array:";
	for(int i=0;i<n+1;i++){
		cout<<a[i]<<" ";
	}
	
}
