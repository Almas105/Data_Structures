#include <iostream>
using namespace std;

int binarysearch(int arr[],int num,int low,int high)
{
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==num){
			return mid;
		}
		 if(arr[mid]<num){
			low=mid+1;
		}
		else {
			high=mid-1;
		}
	}
	return -1;
}

int main(){
	int arr[100],search,n;
	cout<<"\nEnter th size of the array:";
	cin>>n;
	cout<<"\nEnter the Elements in the array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nEnter the element to search:";
	cin>>search;
	int num=binarysearch(arr,search,0,n);
	if(num!=-1){
		cout<<"The element is at index: "<<num<<endl;
	}
	else{
		cout<<"Oops!!No element found!"<<endl;
	}
}
