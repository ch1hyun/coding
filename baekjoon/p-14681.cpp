#include <iostream>
using namespace std;

int main() {
	int x, y, quadrant;
	cin >> x >> y;
	
	quadrant = (x > 0) ? 1 : 2;
	quadrant = (y < 0) ? 5 - quadrant : quadrant;
	
	cout << quadrant << endl;
	
	return 0;
}
