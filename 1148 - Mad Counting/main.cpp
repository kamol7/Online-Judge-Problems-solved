#include <iostream>
#include <set>
#include<map>
#include <iterator>
using namespace std;
#define ll long long
ll ff(ll a, ll b){
    if( a % b ) return  a/b + 1 ;
    return a/b;
}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    ll t;
    cin>>t;
    ll number;
    ll n;
    std::map < ll,ll > mymap;
    for(ll i=1;i<=t;i++){
        cin>>n;
        ll sum=0;
        while(n--){
            cin>>number;
            mymap[number]++;
        }
        for(auto i : mymap){
            ll f=i.first;
            ll s=i.second;
            f++;
            sum+= ff(s,f) * f;
        }

        printf("Case %lld: %lld\n",i,sum);
        mymap.clear();
    }
    return 0;
}