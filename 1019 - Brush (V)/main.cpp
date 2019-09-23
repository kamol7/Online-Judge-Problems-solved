#include <iostream>
#include <vector>
#include <queue>
//verdict accepted
using namespace std;

class Brush{
public:
    int numberOfNode;
    int numberOfEdge;
    vector< vector<pair<int,int>> > dataOfNode;
    int *distance;
    Brush(int,int);
    int FindMinimumDistance();
    void takeInput();
    void addNode(int u, int v, int w);
};

Brush::Brush(int x, int y) {
    numberOfNode= x;
    numberOfEdge= y;
    distance = new int[numberOfNode];
    dataOfNode.resize(numberOfNode);
    for(int i=0;i<numberOfNode;i++) distance[i] = 1<<30;
    //cout<<"Initialization ok\n";

}

void Brush::takeInput() {
    for(int i=0;i<numberOfEdge;i++){
        int u,v,w;
        cin>>u>>v>>w;
        addNode(u,v,w);
    }
    //cout<<"take input ok\n";
}

void Brush::addNode(int u, int v, int w) {
    u--;
    v--;
    dataOfNode[v].push_back(make_pair(u,w));
    dataOfNode[u].push_back(make_pair(v,w));

    //dataOfNode[u].push_back(make_pair(v,w));

}

int Brush::FindMinimumDistance() {
    priority_queue < pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > storeData;
    storeData.push(make_pair(0,0));
    bool visit[numberOfNode];
    for(int i=0;i<numberOfNode;i++)visit[i]= false;
    distance[0]=0;
    while(!storeData.empty()){
        pair<int,int> temp;
        temp= storeData.top();
        storeData.pop();
        if(visit[temp.second]== true) continue;
        visit[temp.second]=true;
        int source=temp.second;
        int dis=temp.first;
        for(pair<int,int> child : dataOfNode[source]){

            if(visit[child.first]== true) continue;
            distance[child.first]= min(dis+child.second,distance[child.first]);
            storeData.push(make_pair(distance[child.first],child.first));



        }

    }

    //cout<<"ok dijkstra\n";
    if(distance[numberOfNode-1]==1<<30) return -1;
    return distance[numberOfNode-1];


}

int solve(){
    int n,m;
    cin>>n>>m;
    auto *object = new Brush(n,m);
    object->takeInput();
    int ans= object->FindMinimumDistance();
    free(object);
    return  ans;
}

int main() {
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
    int ans=solve();
    if(ans==-1) printf("Case %d: Impossible\n",i);
    else printf("Case %d: %d\n",i,ans);
    }
    return 0;
}