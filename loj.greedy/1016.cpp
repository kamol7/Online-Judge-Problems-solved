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

vector< pair<ll,ll> > co;
    ll test;
    scanf("%lld",&test);
     ll point,w;
     ll x,y;
     ll count;
    for (ll i = 1; i <= test; i++)
    {
       
        scanf("%lld%lld",&point,&w);
        for(ll j=0;j<point;j++){
            scanf("%lld%lld",&x,&y);
            co.pb(make_pair(y,x));
        }
        sort(co.begin(),co.end());
         count=0;
         x=co[0].first;
         y=x+w;
         for(ll j=0;j<point;j++){
         	count++;
             while(co[j].first<=y){
             	j++;
             	if(j==point) goto lev;
             }
             j--;
             x=co[j+1].first;
             y=x+w;
             
         }
         lev:
         printf("Case %lld: %lld\n",i,count);
         co.clear();
    }
    

return 0;
} 