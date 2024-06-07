#include <iostream>
using namespace std;

int maximum(int a[],int n){
	int max=-9999;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}	
	}
	return max;
}

void bucketsort(int arr[],int n){
	int max=maximum(arr,n);
	int bucket[max];
	for(int i=0;i<10;i++){
		bucket[i]=0;
	}
	for(int i=0;i<n;i++){
		bucket[arr[i]]++;
	}
	for(int i=0,j=0;i<=max;i++){
		while(bucket[i]>0){
			arr[j++]=i;
		bucket[i]--;
		}
	}
	
}


void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int size,a[100];
	cout<<"Enter the size of the array:";
	cin>>size;
	cout<<"Enter the elements:";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}

  cout << "Original array: ";
  printArray(a, size);
  bucketsort(a,size);
  cout << "Sorted array: ";
  printArray(a, size);
  return 0;

}
