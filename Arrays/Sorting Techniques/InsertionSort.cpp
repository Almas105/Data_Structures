#include <iostream>
using namespace std;

int main(){
	int n,arr[100],key;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	cout<<"After Sorting:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
