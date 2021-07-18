#include <iostream>
#define MAX_LENGTH 9
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int partition(int arr[], int left, int right) {
	int pivot = arr[left];
	int low = left;
	int high = right+1;
	
	do {
		do {
			++low;
		} while(low <= right && pivot > arr[low]);
		
		do {
			--high;
		} while(high >= left && pivot < arr[high]);
		
		if (low < high) {
			swap(arr[low], arr[high]);
		}
	} while(low < high);
	
	swap(arr[left], arr[high]);
	
	return high;
}

void quickSort(int arr[], int left, int right) {
	
	if (left < right) {
		int q = partition(arr, left, right);
		
		quickSort(arr, left, q-1);
		quickSort(arr, q+1, right);
	}
}

int main() {
	int arr[MAX_LENGTH] = {4, 1, 9, 2, 6, 5, 8, 3, 7};
	
	for (int i = 0; i < MAX_LENGTH; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	quickSort(arr, 0, MAX_LENGTH-1);
	
	for (int i = 0; i < MAX_LENGTH; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
