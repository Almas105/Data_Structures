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
void countingsort(int a[],int b[],int max,int n){
	int c[10];
	for(int i=0;i<=max;i++){
		c[i]=0;
	}
	for(int i=1;i<=n;i++){
		c[a[i]]=c[a[i]]+1;
	}
	for(int i=1;i<max+1;i++){
		c[i]=c[i]+c[i-1];
	}
	for(int j=n;j>=1;j--){
		b[c[a[j]]]=a[j];
		c[a[j]]=c[a[j]]-1;
	}
	for(int i=1;i<n+1;i++){
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
  int max=maximum(a, size);
  countingsort(a,b,max,size);
  cout << "Sorted array: ";
  printArray(a, size);
  return 0;

}
