#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int ans=1;
  int n;
  cin>>n;
  vector<int> numbers(n);
  for (int i=0;i<n;i++){
    cin>>numbers[i];
  }
  sort(numbers.begin(),numbers.end());
  for (int i=0;i<n-1;i++){
    if (numbers[i]!=numbers[i+1]){
      ans++;
    }
  }
  cout<<ans;
}
