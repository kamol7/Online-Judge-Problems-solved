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
#define MAX 50
using namespace std;
    string  grid [MAX];

    ll bfs(ll c, ll r){
        ll i;
        for(i=0;i<r;i++) cin>>grid[i];
        ll x,y;
        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                if(grid[i][j]== '@'){
                    x=i;
                    y=j;
                    goto lev;
                }
            }
        }
        lev:

    queue <pair<ll,ll> > checker;
    bool visit[MAX][MAX]={0};
    
    checker.push(make_pair(x,y));

    ll count=1;
    visit[x][y]=true;
    pair<ll , ll > d;
    while(!checker.empty()){
        d=checker.front();
        checker.pop();
        x=d.first;
        y=d.second;
        
        if(grid[x][y+1]=='.' && visit[x][y+1]== false && y+1<c) {
            checker.push(make_pair(x,y+1));
            count++;
            visit[x][y+1]=true;
        }
        if(grid[x][y-1]=='.' && visit[x][y-1]== false && y>0) {
            checker.push(make_pair(x,y-1));
            count++;
            visit[x][y-1]=true;
        }
        if(grid[x+1][y]=='.' && visit[x+1][y] == false && x+1<r) {
            checker.push(make_pair(x+1,y));
            count++;
            visit[x+1][y]=true;
        }
        if(grid[x-1][y]=='.' && visit[x-1][y]== false  && x>0) {
            checker.push(make_pair(x-1,y));
            count++;
            visit[x-1][y]=true;
        }


    }
    return count;

    }


int main(){
    freopen("in.txt","r",stdin);
    ll test;
     scanf("%lld",&test);
     ll c,r;
     for(ll i=1;i<=test;i++){
         scanf("%lld%lld",&c,&r);
         printf("Case %lld: %lld\n",i,bfs(c,r));
         for(ll j=0;j<r;j++) grid[j].clear();

     }


return 0;
}