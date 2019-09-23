//verdict : wrong answer
#include <iostream>
#include <algorithm>
#define long long long
using namespace std;
long findMaximumWay(long *arr, long size , long weight){
    long ways=1;
    long sum;
    long remainSum;
    for(long i=0;i<size;i++){
        if(arr[i]>weight) break;
        sum=0;
        remainSum = weight - arr[i];
        long counter=0;
        for(long j=0;j<i;j++){
            sum+=arr[j];
            if(sum>remainSum) break;
            else counter++;
        }
        ways += 1<<counter;
    }
    return ways;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    long test;
    cin>>test;
    long *arr;
    for(long i=1;i<=test;i++){
        long n,w;
        cin>>n>>w;
        arr= new long[n];
        for(int j=0;j<n;j++) cin>>arr[j];
        sort(arr, arr+n);
        printf("Case %lld: %lld\n",i,findMaximumWay(arr,n,w));
        free(arr);



    }
    return 0;
}