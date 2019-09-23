#include <iostream>
#define mod 1000007
#include <algorithm>
#include <vector>
#define long long long

int main() {

    int test;
    std::cin>>test;
    std::vector< long > data;
    for(int i=1;i<=test;i++){

         long n,k,c,f;
        std::cin>>k>>c>>n>>f;
        data.resize(n);

        data[0]=f;

        for(int j=1;j<n;j++) data[j] = ((data[j-1]*k + c) % mod);
        std::sort(data.begin(),data.end());
        long res=0;
        for(int j=0;j<n;j++){
            res+=data[j] * (2*j - n +1);
        }
        printf("Case %lld: %lld\n",i,res);

        data.clear();
    }
    return 0;
}