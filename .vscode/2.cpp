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

int main(){
    //vector<ll> vec;
    ll test;
    cin>>test;
    ll i,j;
    ll n,k;
    ll num;

    ll mi,ma;
    for(i=0;i<test;i++){
        cin>>n>>k;
        cin>>num;
        //vec.pb(num);
        ma=num;
        mi=num;
        for(j=1;j<n;j++){
            cin>>num;
            ma=max(num,ma);
            mi=min(num,mi);
        }
        if((max-min)>2*k) cout<<"-1\n";
        else{
            mi+=k;
            if(mi>ma) mi=ma;
            cout<<mi<<endl;
        }
    }


return 0;
}