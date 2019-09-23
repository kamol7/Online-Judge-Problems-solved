#include <iostream>
using namespace std;

#include <vector>

class Graph{
public:
    vector < vector<int> > dataOfRelation;
    int numberOfPeople;
    int numberOfRelation;
    bool *visit;
    int *money;
    int avarage;
    Graph(int,int);
    void takeInput();
    void addNode(int,int);
    vector<int>temp;
    void dfs(int);
    bool check();
};

Graph::Graph(int x, int y) {
    numberOfPeople = x;
    numberOfRelation=y;
    visit = new bool[numberOfPeople];
    money = new int[numberOfPeople];
    for(int i=0;i<numberOfPeople;i++) visit[i]=false;
    dataOfRelation.resize(numberOfPeople);
    avarage=0;
}

void Graph::addNode(int one, int two) {
    one--;
    two--;
    dataOfRelation[one].push_back(two);
    dataOfRelation[two].push_back(one);
}

void Graph::takeInput() {
    int sum=0;
    for(int i=0;i<numberOfPeople;i++) {
        cin>>money[i];
        sum+=money[i];
    }
    int x,y;
    for(int i=0;i<numberOfRelation;i++){
        cin>>x>>y;
        addNode(x,y);
    }
    avarage = sum % numberOfPeople != 0 ? -1 : sum / numberOfPeople;

}

void Graph::dfs(int source) {
    if(visit[source])
        return;

    visit[source]=true;
    temp.push_back(source);
    for(int child: dataOfRelation[source]){
        if(!visit[child]){
            dfs(child);
        }
    }

}

bool Graph::check() {
    if(avarage==-1) return false;
    for(int i=0;i<numberOfPeople;i++){
        if(visit[i]) continue;
        dfs(i);
        int sum=0;
        for(int dd: temp) sum+=money[dd];
        int size=temp.size();
        if(sum%size !=0 || sum/size != avarage) return false;
        temp.clear();
    }
    return true;

}
bool solve(){
    int x,y;
    cin>>x>>y;
    auto *object= new Graph(x,y);
    object->takeInput();
    bool flag= object->check();
    free(object);
    return flag;
}
int main() {
    ///std::cout << "Hello, World!" << std::endl;
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        bool flag=solve();
        if(flag) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}