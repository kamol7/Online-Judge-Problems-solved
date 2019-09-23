#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define white 0
#define black 1
struct node{
    string from;
    string to;
    int cost;
};


bool cmp(node a, node b){
    return a.cost<b.cost;
}

class Graph{
public:
    int numberOfRode;
    vector <node> dataOfRode;
    map<string,string>parent;
    map<string,vector<string>> dataOfCity;
    map<string, int> visit,rank;
    int minimumCost=0;
    Graph(int);
    void takeInput();
    void sortData();
    void findMinimumCost();
    string findParent(string x);
    void dfs(string);
    bool checkRoad();
    int returnValue();


};

Graph::Graph(int x) {
    numberOfRode = x;
}

void Graph::takeInput() {
    node temp;
    for(int i=0;i<numberOfRode;i++){
        cin>> temp.to >> temp.from >>temp.cost;
        dataOfRode.push_back(temp);
        visit[temp.to]= white;
        visit[temp.from]=white;
        rank[temp.to]= white;
        rank[temp.from]=white;
        parent[temp.from]=temp.from;
        parent[temp.to]=temp.to;
        dataOfCity[temp.to].push_back(temp.from);
        dataOfCity[temp.from].push_back(temp.to);
        temp.to.clear();
        temp.from.clear();
    }


}

void Graph::sortData() {
    sort(dataOfRode.begin(),dataOfRode.end(),cmp);
}

void Graph::findMinimumCost() {
        minimumCost =0;
        for(int i=0;i<numberOfRode;i++){
            string parentOfX= findParent(dataOfRode[i].from);
            string parentOfY= findParent(dataOfRode[i].to);
            if(parentOfX==parentOfY) continue;
            if(rank[parentOfX]>rank[parentOfY]){
                parent[parentOfY]=parentOfX;
                rank[parentOfX]++;
            }
            else {
                parent[parentOfX]=parentOfY;
                rank[parentOfY]++;
            }
            minimumCost+=dataOfRode[i].cost;
        }

}

string Graph::findParent(string x) {
    if(parent[x]==x) return x;
    return findParent(parent[x]);
}

void Graph::dfs(string source) {

        for(string child: dataOfCity[source]){
            if(visit[child]==white){
                visit[child]=black;
                dfs(child);
            }
        }
}

bool Graph::checkRoad() {
    dfs(dataOfRode[0].from);
    for(pair<string,int> temp : visit){
        if(temp.second == white) return false;
    }
    return true;
}

int Graph::returnValue() {
    if(checkRoad()== true) return minimumCost;
    return -1;
}
void solve(){
    int m;
    cin>>m;
    auto *object = new Graph(m);
    object->takeInput();
    object->sortData();
    object->findMinimumCost();
    int ans= object->returnValue();
    free(object);
    if(ans==-1) cout<<" Impossible"<<endl;
    else cout<<" "<<ans<<endl;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        printf("Case %d:",i);
        solve();
    }
    return 0;
}