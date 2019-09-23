#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
#include <math.h>
#include <algorithm>
#define   ll long long


vector <ll> allNumber,allValid;
#define MAX 10000000000
#define mod 100000007



void makeNumber(){
    long long sq= (long long)sqrt(MAX);
    for(ll x=2 ;x<=sq;x++){
        ll number= x*x;
        while (number<=MAX){
            allNumber.push_back(number);

            number*=x;
        }
    }
    sort(allNumber.begin(),allNumber.end());
    allValid.push_back(allNumber[0]);
    for(int i=1;i<102719;i++){
        if(allNumber[i]==allNumber[i-1])continue;
        allValid.push_back(allNumber[i]);
    }
    allNumber.clear();


}
ll fact[2500];
ll naturalInverse[1200];
ll factInverse[1200];

void makeFact(){
    fact[0]=fact[1]=1;
    naturalInverse[0]=naturalInverse[1]=1;
    factInverse[0]=factInverse[1]=1;
    for(int i=2;i<2500;i++){
        fact[i]= (i*fact[i-1]) % mod;

    }
    for(int i=2;i<1200;i++){
        naturalInverse[i]= (naturalInverse[mod%i] * (mod - mod/i) ) % mod;
        factInverse[i]= (factInverse[i-1]*naturalInverse[i]) % mod;
    }
}

ll findCatalan(ll n){
    if(n<3)
        return n;
    ll ans= ((fact[2*n]*factInverse[n]) % mod) * factInverse[n+1];
    return ans % mod;
}


int main() {


    makeNumber();
    makeFact();

    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        ll low= lower_bound(allValid.begin(),allValid.end(), a) - allValid.begin();

        ll high= upper_bound(allValid.begin(),allValid.end(),b) - allValid.begin();
        ll range= high-low;

        ll ans = findCatalan(range);
        printf("Case %d: %lld\n",i,ans);

    }

    return 0;
}