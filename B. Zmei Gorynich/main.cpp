#include <iostream>
#include <algorithm>
#define long long long
long solve(){
    long n,x;
    std::cin>>n>>x;
    long maxDamage=0;
    long maxDefeat=0;
    long d,h;
    while(n--){
        std::cin>>d>>h;
        maxDamage= std::max(maxDamage,d);
        maxDefeat= std::max(maxDefeat,d-h);
    }
    x-=maxDamage;
    if(x<=0) return 1;
    if(maxDefeat==0) return -1;
    long blow;
    if(x%maxDefeat) blow= x/maxDefeat +1;
    else blow = x/maxDefeat;
    return blow+1;
}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    long test;
    std::cin>>test;
    while (test--){
        std::cout<<solve()<<"\n";
    }
    return 0;
}