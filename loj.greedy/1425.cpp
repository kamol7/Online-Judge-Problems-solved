//ready_man
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define pb push_back
#define ppb pop_back();
#define ll long long
#define dd double
#define MAX 1000000+500
using namespace std;


ll hot_cake(ll lol){
    ll i=lol;
    ll max=0;
    ll current=0;
    ll last=0;
    ll dif;
    ll current_max=0;
    while(i--){
        scanf("%lld",&current);
        dif=current-last;
        if(dif>max){
            max=dif;
            current_max=max-1;
            goto lev;
        }
        else if(dif==current_max) {
            current_max--;
            goto lev;
        }
        if(current_max<=dif && dif<=max) {
            max++;
            current_max=max;
        }
        lev:
        
        last=current;
    }
    return max;
    
}
int main(){
    ll test;
    scanf("%lld",&test);
    ll lol;
    for(ll i=1;i<=test;i++){
        scanf("%lld",&lol);
        lol=hot_cake(lol);
        printf("Case %lld: %lld\n",i,lol);

    }


return 0;
}