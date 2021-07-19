// endl이 버퍼를 비워줌과 동시에 개행을 수행하기 때문에 시간 초과가 되었다.

#include <iostream>
#include <algorithm>
using namespace std;

void binarySearch(int arr1[], int arr2[], int size1, int size2) {
	int i, mid, low, high;
	
	for (i=0;i<size2;++i) {
		low = 0;
		high = size1 - 1;
		
		while(low <= high) {
			
			mid = (low + high) / 2;

			if (arr1[mid] == arr2[i]) {
				cout << "1\n";
				break;
			}
			else if (arr1[mid] > arr2[i]) high = mid - 1;
			else low = mid + 1;
		}
		if (low > high) cout << "0\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int i, num1, num2, temp;
	cin >> num1;
	
	int arr1[num1];
	for(i = 0; i < num1; ++i) {
		cin >> temp;
		arr1[i] = temp;
	}
	sort(arr1, arr1+num1);
	
	cin >> num2;
	int arr2[num2];
	for(i = 0; i < num2; ++i) {
		cin >> arr2[i];
	}
	
	binarySearch(arr1, arr2, num1, num2);
	
	return 0;
}
