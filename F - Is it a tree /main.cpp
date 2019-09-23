#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
vector < set<int >> data;
bool *visit;

void dfs(int src, int par) {
   //cout<<src<<"\n";
    if(visit[src]== true) {
        visit[src]= false;
        return;
    }
    visit[src]= true;

    for(int i: data[src]){
        cout<<par<<"  : "<<src<<endl;
        if(i==par);
        else{
            dfs(i,src);

        }

        //cout<<"ok\n";
    }

}
bool checkTree(){
    int n,m;
    cin>>n>>m;
    //cout<<"ok\n";

    data.resize(n+1);
    int u,v;
    for(int i=0;i<m;i++) {
        cin>>u>>v;
        data[u].insert(v);
        data[v].insert(u);
    }

    //cout<<"ok\n";


    visit = new bool[n+1];
   for(int i=1;i<=n;i++) visit[i]=false;

    for(int i=1;i<=n;i++) {
        if(visit[i]);
        else return false;
    }

    return true;
}



int main() {
    //std::cout << "Hello, World!" << std::endl;
    if(checkTree()) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}