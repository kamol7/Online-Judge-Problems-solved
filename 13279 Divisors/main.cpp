#include <iostream>
#include <cstring>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;


#define mod 100000007
#define long long long
#define MAX 5000001


//map<int ,int> numberOfDivisor[MAX];
int primeNumber[348515];


void sieve(){
    bool prime[MAX];
    memset(prime, true,sizeof prime);
    int k=0;
    //cout<<"ok"<<endl;
    for(long i=2;i<MAX;i++){
        if(prime[i]){
            primeNumber[k++]=i;
            for(long j=i*i;j<MAX;j+=i) prime[j]=false;
        }
    }
    //cout<<k<<endl;
}

long numberOfSum(long x,long number){
    long z = number/x;
    long res= number*z + z - x*z*(z+1)/2;
    return res%mod;

}
long totalDivisor(long x,long number){

    long count=0;
    long base=x;
    while (base<=number){
        count+=numberOfSum(base,number);
        base*=x;
        count%=mod;
    }
    return count+1;
}

long nod(long number){
    if(number<3) return number;
    long res=1;
    for(long i=0;primeNumber[i]<=number;i++){
        long count=totalDivisor(primeNumber[i],number);
        res*=count;
        res%=mod;
    }
    return res;

}


int main() {
    sieve();
    primeNumber[348513]= 1<<30;
    //makeDivisor();
    //std::cout << "Hello, World!" << std::endl;
    long num;
    while (cin>>num && num){
        cout<<nod(num)<<endl;
    }
    return 0;
}