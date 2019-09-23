#include <iostream>
using namespace std;
#define long long long
class HelpingCicada{
public:
    long  numberOfLifeDay;
    long numberOfAttacker;
    long *dataOfAttackers;
    long safeDays=0;
    HelpingCicada(long,long);
    void takeInput(){
        for(int i=0;i<numberOfAttacker;i++) cin>>dataOfAttackers[i];
    }
    long gcd(long x, long y) {
        if(y==0) return x;
        return gcd(y,x%y);
    }
    long lcm(long x, long y);
    long findSafeDays(){
        safeDays= numberOfLifeDay;
        long combination= 1<<numberOfAttacker;
        for(long i=1;i<combination;i++){
            int count=0;
            long findLcm=0;
            for(int j=0;j<numberOfAttacker;j++) {
                if(i & 1<<j){
                    count++;
                    findLcm= lcm(findLcm,dataOfAttackers[j]);
                    if(findLcm>numberOfLifeDay)break;
                }
            }
            if(count & 1) safeDays-= (numberOfLifeDay/findLcm);
            else safeDays+=(numberOfLifeDay/findLcm);

        }
        return safeDays;
    }
};


HelpingCicada::HelpingCicada(long x, long y) {
    numberOfLifeDay=x;
    numberOfAttacker=y;
    dataOfAttackers = new long[numberOfAttacker];
    safeDays = numberOfLifeDay;
}


long HelpingCicada::lcm(long x, long y) {
    if(x==0)
        return y;

    long result=1;
    long GCD=gcd(x,y);
    x= x/GCD;
    y=y/GCD;
    return GCD*x*y;
}

long solve(){
    long x,y;
    cin>>x>>y;
    HelpingCicada *object = new HelpingCicada(x,y);
    object->takeInput();
    long ans= object->findSafeDays();
    free(object);
    return ans;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        printf("Case %lld: %lld\n",i,solve());
    }
    return 0;
}