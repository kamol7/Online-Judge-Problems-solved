#include <iostream>
#include <algorithm>
using namespace std;

#include <cmath>
#define long long long


long CSOD(long n){

    long sq= sqrt(n);
    long ans=0;
    for(long i=2;i<=sq;i++){

    long j= n/i;
    ans+= (j+i+1)*(j-i)/2;
    ans+=(j- i)*i +i;

    }
    return ans;
}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    long test;
    scanf("%lld",&test);
    long num;
    for(int i=1;i<=test;i++){
        scanf("%lld",&num);
        long ans= CSOD(num);
        printf("Case %d: %lld\n",i,ans);
    }
    return 0;
}