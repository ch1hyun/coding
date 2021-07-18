// 시간 초과

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
	int i, j, key;
	for(int i = 1; i < size; ++i) {
		j = i - 1;
		key = arr[i];
		while(j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

int binarySearch(int arr[], int target, int size) {
	int mid;
	int low = 0;
	int high = size - 1;
	
	while(low <= high) {
		mid = (low + high) / 2;
		
		if (arr[mid] == target) return mid;
		else if (arr[mid] > target) high = mid - 1;
		else low = mid + 1;
	}
	
	return -1;
}

int main() {
	int num, target, result;
	double result_c;
	time_t start, end;
	cin >> num;
	
	int arr[num];
	for(int i = 0; i < num; ++i) {
		cin >> arr[i];
	}
	insertionSort(arr, num);
	
	cin >> num;
	int find[num];
	for(int i = 0; i < num; ++i) {
		cin >> find[i];
	}
	
	for (int i = 0; i < num; ++i) {
		if(binarySearch(arr, find[i], num) != -1) cout << "1" << endl;
		else cout << "0" << endl;
	}
	
	return 0;
}
