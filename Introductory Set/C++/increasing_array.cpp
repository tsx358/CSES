#include <iostream>
#include <vector>
using namespace std; 

int main() {
	vector<int>numbers;
	long n;
	long ans=0;
	long input;
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> input;
		numbers.push_back(input);
	}
	for (int i = 1; i < n; i++) {
		if (numbers[i] < numbers[i -1]) {
			ans += numbers[i - 1] - numbers[i];
			numbers[i] = numbers[i - 1];
		}
	}
	cout << ans;
	return 0;
}

