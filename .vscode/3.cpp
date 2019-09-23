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
    ll test;
    cin>>test;
    ll i;
    ll k,n,a,b,ans;
    for(i=0;i<test;i++){
        cin>>k>>n>>a>>b;
        if(n*b<k){
            k--;
            ans=floor((k-b*n)/(a-b));
            if(ans>n) ans=n;
            cout<<ans<<endl;
        }
        else cout<<"-1\n";
    }


return 0;
}