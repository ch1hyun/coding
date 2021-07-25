// 랜선 자르기 (left + right) 연산에서 int 범위의 2배가 되므로 long long으로 선언함으로써 해결할 수 있다.

#include <iostream>
using namespace std;

int max_c(int arr[], int size) {
	int i, max = arr[0];
	
	for(i = 0; i < size; ++i) {
		if(max < arr[i]) max = arr[i];
	}
	
	return max;
}

int binarySearch(int arr[], int k, int n) {
	int i, buffer, count;
	long long right, left, mid;
	right = max_c(arr, k);
	left = 1;
	
	while(left <= right) {
		count = 0;
		mid = (left + right) / 2;
		
		for(i = 0; i < k; ++i) count += arr[i] / mid;
		
		if(count >= n) {
			buffer = mid;
			left = mid + 1;
		} else right = mid - 1;
	}
	
	return buffer;
}

int main() {
	int i, k, n;
	cin >> k >> n;
	
	int arr[k];
	for(i = 0; i < k; ++i) cin >> arr[i];
	
	cout << binarySearch(arr, k, n) << endl;
	
	return 0;
}
