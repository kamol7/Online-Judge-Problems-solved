//verdict status time limit exceed
#include <iostream>
#define  long long long
#define MAX 100000
long countZero(long m, long n){
    long count=0;
    if(m==0) {
        count++;
        m=9;
    }
    while(m<=n && m%MAX){
        long x= m;
        while(x){
            if( x%10 == 0) count++;
            x/=10;
        }
        m++;
    }
    while(1){
        long x=m;
        if(m+MAX<n){
            x/=MAX;
            while(x){
                if(x%10 == 0) count+=MAX;
                x/=10;
            }
            count+=50000;
            m+=MAX;
        }


        else break;
    }

    while(m<=n){
        long x=m;
        while(x){
            if (x%10 == 0)count++;
            x/=10;
        }
        m++;
    }

    return  count;

}

int main() {
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    long test;
    std::cin>>test;
    for(long i=1;i<=test;i++){
        long m,n;
        std::cin>>m>>n;
        long ans=countZero(m,n);
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}