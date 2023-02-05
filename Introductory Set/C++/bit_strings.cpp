#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long ans=1;
    cin>>n;
    for (int i=0;i<n;i++){
        ans*=2;
        ans %= 1000000000+7;
    }
    cout<<ans;
    return 0;
}
