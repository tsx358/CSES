#include <iostream>

using namespace std;

int main() {
	long n;
	cin >> n; 
	long value; 
	long sum=0;
	long origSum=0;
	for (int i = 1; i < n; i++) {
		cin >> value;
		sum += value;
	}
	cout << ((1 + n) * n) / 2 - sum;
	return 0;

}


