#include <iostream>
using namespace std;
#define  ll long long

int main() {
    //.std::cout << "Hello, World!" << std::endl;
    ll t;
    cin>>t;
    ll *arr;
    int n,q;
    for(ll i=1;i<=n;i++){
        cin>>n>>q;
        ll a,b;
        arr = new ll[n];
        ll sum=0;
        for(int j=0; j < n; j++){
            cin>>arr[j];
            sum+= arr[j]*(n-j-j-1);

        }
        printf("Case %lld:\n",i);
        while (q--){
        cin>>a;
        if(a) cout<<sum<<endl;
        else{
            cin>>a>>b;
            sum-= arr[a]* (n-a-a-1);
            sum+= b* (n-a-a-1);
            arr[a]=b;
        }
        }free(arr);

    }
    return 0;
}