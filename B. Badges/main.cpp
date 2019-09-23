#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int boy,girl,n;
    cin>>boy>>girl>>n;
    int mini= min(boy,girl);
    int maxi =max(boy,girl);
    int ans = 0;
    for(int i=0;i<=n && i<=mini;i++){
        if((n-i)<=maxi) ans++;
    }
    cout<<ans<<endl;
    return 0;
}