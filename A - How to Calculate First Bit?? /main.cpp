#include <iostream>
using namespace std;

#include <vector>
#include <math.h>
#define ll long long
vector <ll> positionValue;
int check(int n){
    int last=0;
    int count=0;
    for(int i=0;i<32;i++){
        if(n & 1<<i){
            if(last==1)count++;
            last=1;
        }
        else last=0;
    }
    return count;
}
void setPositionValue(){
    positionValue.push_back(0);
    positionValue.push_back(0);
    long long x=1;
    long long increase=1;
    positionValue.push_back(x);
    for(int i=2;i<32;i++){
        long long n= positionValue[i]*2 + increase;
        positionValue.push_back(n);
        increase*=2;

    }

    for(int i=1;i<positionValue.size();i++){
        positionValue[i]+=positionValue[i-1];
    }

}

ll findConjucate(ll n){
    long long count=0;

    //if(n&1 && (n & 1<<1)) count++;
    //if((n & 1<<1) && (n & 1<<2))count++;
    /*
    for(int i=0;i<31;i++){
        if(n & (1<<i)) cout<<1;
        else cout<<0;
    }
     */
    int con_count=0;
    int last=0;
    //cout<<count<<endl;
    for(int i=31;i>=0;i--){
        if(n & (1<<i)) {
            if(last==1) con_count++;
            count+=(positionValue[i]);
            n -=(int)pow(2,i);
            if(con_count){
                count+=n+1;
            }
            con_count=0;

            last=1;
            //cout<<"here\n";
        }
        else last=0;
        //cout<<count<<endl;
    }

    return count;
}
int main() {
    //std::cout << "Hello, World!" << std::endl;

    setPositionValue();
    //cout<<positionValue[2]<<endl;
    ll test;
    //for(int i=0;i<500;i++) cout<<check(i)<<endl;
    //ll count=0;
    //for(int i=0;i<=56;i++)count+=check(i);
    //cout<<count<<endl;
    //cout<<positionValue[5]+positionValue[4]+1+8+1+positionValue[3]<<endl;
    //*
    cin>>test;
    ll number;
    for(int i=1;i<=test;i++){
        cin>>number;
        printf("Case %d: %lld\n",i,findConjucate(number));
    }
     //*/
    return 0;
}