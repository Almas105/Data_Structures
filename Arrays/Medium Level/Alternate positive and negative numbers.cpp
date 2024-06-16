/*Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
Note: Array should start with a positive number and 0 (zero) should be considered a positive element.
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
Explanation : Positive elements : 9,4,5,0,2
Negative elements : -2,-1,-5,-3
As we need to maintain the relative order of
postive elements and negative elements we will pick
each element from the positive and negative and will
store them. If any of the positive and negative numbers
are completed. we will continue with the remaining signed
elements.The output is 9,-2,4,-1,5,-5,0,-3,2.
*/

#include <iostream>
#include <vector>
using namespace std;
int function(int arr[],int n){
	vector <int> pos,neg;
	int c1=0,c2=0;
	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			pos.push_back(arr[i]);
			c1++;
		}
		if(arr[i]<0){
			neg.push_back(arr[i]);
			c2++;
		}
	}
	int j=0;
	for(int i=0;i<n && j<n;i++ ){
		if(i<c1){
			arr[j]=pos[i];
			j++;
		}
		if(j<c2){
			arr[j]=neg[i];
			j++;
		}
	}
}
int main(){
	int n,arr[100];
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	function(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	
}
