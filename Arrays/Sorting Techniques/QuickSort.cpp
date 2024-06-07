#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++){
		if(arr[j]<=pivot){
			i++;
			int tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
		}
		
	}
	int temp=arr[i+1];
		arr[i+1]=arr[high];
		arr[high]=temp;
	return i+1;
}

void quicksort(int arr[],int low, int high){
	if(low<high){
		int pivot=partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
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
  quicksort(a,0,size-1);
  cout << "Sorted array: ";
  printArray(a, size);
  return 0;

}
