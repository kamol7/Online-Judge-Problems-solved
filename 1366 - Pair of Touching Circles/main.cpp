#include <iostream>
#include <algorithm>
#define long long long
//verdict wrong answer
using namespace std;
class FindCircle{
public:
    long big;
    long small;
    FindCircle(long,long);
    long FindNumberOfCircle(){
        long count=0;
        for(long i=1;i<big;i++){
            for(long j=i;j<small ; j++){
                long hight= 2*i + 2*j;
                long width = 2*j;
                if(hight>big || width > small)  break;
                long x= (big-hight + 1) * (small - width + 1);

                if(hight<=small){
                    x+= (small-hight + 1) * (big - width + 1);
                }
                if(i==j) count+=x;
                else count+= (2*x);
                //cout<<"x :"<<x <<" count: "<<count<<endl;

            }
            if(i*2 > big ) break;
        }
        return count;

    }

};

FindCircle::FindCircle(long  x, long y) {
    this->big = max(x,y);
    this->small= min(x,y);
}
long solve(){
    long x,y;
    cin>>x>>y;
    FindCircle *object ;
    object = new FindCircle(x,y);
    long ans = object->FindNumberOfCircle();
    free(object);
    return ans;

}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        printf("Case %d: %lld\n",i,solve());
    }
    return 0;
}