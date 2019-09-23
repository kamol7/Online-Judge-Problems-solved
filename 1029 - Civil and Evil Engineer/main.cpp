#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#define MAX 120
//verdict wrong
using namespace std;

struct  node{
    int from;
    int to;
    int cost;


};
//node ok

bool compereForBest(node a, node b){

    return a.cost < b.cost;
}

int parent[MAX];
int Rank[MAX];

void makeDisjointSet(){
    for(int i=0;i<MAX;i++) parent[i]=i;
    //make disjoint set by changing parent
}


int findParent(int a){
    if(parent[a]==a) return a;
    return findParent(parent[a]);
}

int  minimumSpanningTree( vector <node> dataOfNode , int n ){
    int count=0;
    int sum=0;
    makeDisjointSet();
    memset(Rank,0,sizeof Rank);
    int size=dataOfNode.size();
    for(int i=0;i<size;i++){
        int from=dataOfNode[i].from;
        int to=dataOfNode[i].to;
        int cost=dataOfNode[i].cost;
        int parentOfFrom= findParent(from);
        int parentOfTo= findParent(to);
        if(parentOfFrom==parentOfTo) continue;

        if( Rank[parentOfFrom] > Rank[parentOfTo] ){
            parent[parentOfTo] = parent[parentOfFrom];
            Rank[parentOfTo]++;
        }
        else{
            parent[parentOfFrom]=parent[parentOfTo];

            Rank[parentOfFrom]++;
        }
        count++;
        sum+=cost;
        if(count==n) break;

    }
    return sum;
}
void solve(){

    int n;
    cin>>n;
    int x,y,z;
    vector <node> xx;
    node temp;

    while (cin>>x>>y>>z && (x+y+z)){
        temp.cost=z;
        temp.from=x;
        temp.to=y;
        xx.push_back(temp);
    }

    sort(xx.begin(),xx.end(),compereForBest);
    int ans= minimumSpanningTree(xx,n);
    reverse(xx.begin(),xx.end());
    ans+=minimumSpanningTree(xx,n);
    xx.clear();

    if( ans & 1 ) printf(" %d/2\n",ans);
    else printf(" %d\n",ans/2);

}

int main() {
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        printf("Case %d:",i);
        solve();

    }
    return 0;
}