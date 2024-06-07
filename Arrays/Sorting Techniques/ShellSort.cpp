#include <iostream>
using namespace std;

void shellsort(int arr[],int n){
	for(int gap=n/2;gap>0;gap/=2){
		for(int i=gap;i<n;i++){
			int j;
			int key=arr[i];
			for(j=i;j>=gap && arr[j-gap]>key;j-=gap){
				arr[j]=arr[j-gap];
			}
			arr[j]=key;
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
  shellsort(a,size);
  cout << "Sorted array: ";
  printArray(a, size);
  return 0;

}
