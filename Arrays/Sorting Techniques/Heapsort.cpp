#include <iostream>
using namespace std;

void heapify(int arr[], int size, int rootIndex) {
    int largest = rootIndex; 
    int leftChild = 2 * rootIndex + 1; // Left child index
    int rightChild = 2 * rootIndex + 2; // Right child index

    // If the left child is larger than the root
    if (leftChild < size && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }

    // If the right child is larger than the largest so far
    if (rightChild < size && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    // If the largest element is not the root
    if (largest != rootIndex) {
        std::swap(arr[rootIndex], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, size, largest);
    }
}

// Heap sort implementation
void heapSort(int arr[], int size) {
    // Build a max-heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    // Extract elements from the heap one by one
    for (int i = size - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]); // Move current root to the end

        heapify(arr, i, 0); // Reduce the heap size and heapify the root
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
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

    heapSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
