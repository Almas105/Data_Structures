#include <iostream>
using namespace std;

int linearsearch(int arr[],int num,int n)
{
	int x=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			x=i;
			break;
		}
	}
	return x;
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
	int num=linearsearch(arr,search,n);
	if(num!=-1){
		cout<<"The element is at index: "<<num<<endl;
	}
	else{
		cout<<"Oops!!No element found!"<<endl;
	}
}
