#include <iostream>
using namespace std;

void selection(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			int tmp=arr[i];
			arr[i]=arr[min];
			arr[min]=tmp;
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
  selection(a,size);
  cout << "Sorted array: ";
  printArray(a, size);
  return 0;

}
