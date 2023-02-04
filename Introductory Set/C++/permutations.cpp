#include <iostream>
#include <vector>
using namespace std; 

int main() {
	vector<int>odd;
	vector<int>even;
	long n;
	cin >> n;
	if (n == 1) {
		cout << 1;
	}
	else if (n <= 3) {
		cout << "NO SOLUTION"; 
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				even.push_back(i);
			}
			else {
				odd.push_back(i);
			}
		}

		for (int i = odd.size()-1; i >= 0; i--) {
			cout << odd[i]<<" ";
		}
		for (int i = even.size()-1; i>=0; i--) {
			cout << even[i] << " ";
		}
	}
	return 0;
}
