#include <iostream>
using namespace std;
int largest(int arr[],int n){
	int max=-9999;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}

void radixsort(int a[],int n,int exp){
	int c[10]={0},b[n]={0};
	for(int i=1;i<=n;i++){
		c[(a[i]/exp)%10]=c[(a[i]/exp)%10]+1;
	}	
	for(int i=1;i<=10;i++){
		c[i]=c[i]+c[i-1];
	}
	for(int i=n;i>=1;i--){
		b[c[(a[i]/exp)%10]]=a[i];
		c[(a[i]/exp)%10]--;
	}
	for(int i=1;i<=n;i++){
		a[i]=b[i];
	}
}

void printArray(int arr[], int size) {
  for (int i = 1; i < size+1; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int size,a[100],b[100];
	cout<<"Enter the size of the array:";
	cin>>size;
	cout<<"Enter the elements:";
	for(int i=1;i<size+1;i++){
		cin>>a[i];
	}

  cout << "Original array: ";
  printArray(a, size);
  int max=largest(a, size);
  for(int i=1;max/i>0;i*=10){
  	radixsort(a,size,i);
  }
  
  cout << "Sorted array: ";
  printArray(a, size);
  return 0;

}
