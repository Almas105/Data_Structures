#include <iostream>
using namespace std;
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {

  int i = 0; // Index for the left subarray
  int j = 0; // Index for the right subarray
  int k = 0; // Index for the merged array

  while (i < leftSize && j < rightSize) {
   if (left[i] <= right[j]) {
      arr[k] = left[i];
      i++;
    } 
    else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of the left subarray, if any
  while (i < leftSize) {
    arr[k] = left[i];
    i++;
    k++;
  }

  // Copy the remaining elements of the right subarray, if any
  while (j < rightSize) {
    arr[k] = right[j];
    j++;
    k++;
  }
}

// Merge sort implementation
void mergeSort(int arr[], int size) {
  if (size <= 1)
    return;
  int mid = size / 2;

  // Create left and right subarrays
  int left[mid];
  int right[size - mid];

  // Copy data to left and right subarrays
  for (int i = 0; i < mid; i++) {
    left[i] = arr[i];
  }
  for (int i = mid; i < size; i++) {
   right[i - mid] = arr[i];
  }

  // Recursively sort the left and right subarrays
  mergeSort(left, mid);
  mergeSort(right, size - mid);

  // Merge the sorted subarrays
  merge(arr, left, mid, right, size - mid);
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int size,arr[100];
	cout<<"Enter the size of the array:";
	cin>>size;
	cout<<"Enter the elements:";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

  cout << "Original array: ";
  printArray(arr, size);
  mergeSort(arr, size);
  cout << "Sorted array: ";
  printArray(arr, size);
  return 0;

}
