#include <iostream>
using namespace std;

int main() {
	string s;
	int count = 1;
	int answer = 1;
	cin >> s;
	for (unsigned i = 0; i < s.length()-1; i++) {
		if (s[i] == s[i + 1]) {
			count++;
		}
		else {
			count = 1;
		}
		answer = max(answer, count);
	}
	cout << answer; 
	return 0;
}
