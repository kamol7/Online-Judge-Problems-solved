//
//  main.cpp
//  We Ship Cheap
//
//  Created by Kamol Kumar paul on 26/8/19.
//  Copyright © 2019 Kamol Kumar paul. All rights reserved.
//

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
#define p(x) cout<<"dg "<<x<<endl;
#define pb push_back
#define ppb pop_back();
#define ll long long
#define dd double
#define pii pair <ll,ll>
#define MAX 10e5+500
using namespace std;
class graph{
public:
    map <string, string> root;
    map < string, vector<string> > dataOfGraph;
    void addNode(string,string);
    bool findDistance(string,string);
    void printRoot(string,string);

};

void graph::addNode(string node, string adjacent){
    dataOfGraph[node].pb(adjacent);
    dataOfGraph[adjacent].pb(node);
}
bool graph::findDistance(string source, string destination){

    map <string, int> visit;
    queue <string> storeData;
    storeData.push(source);
    vector< pair <string, string> > go;
    string top;
    visit[source]=0;
    while (!storeData.empty()) {
        top= storeData.front();
        storeData.pop();
        for(ll i=0;i<dataOfGraph[top].size();i++){

            if(!visit[dataOfGraph[top][i]]){
                if(dataOfGraph[top][i]==destination){
                    root[destination]= top;
                    return true;
                }
                visit[dataOfGraph[top][i]]= visit[top]+1;
                root[dataOfGraph[top][i]]=top;
                storeData.push(dataOfGraph[top][i]);
            }
        }

    }

    return false;
}
void graph::printRoot(string destination, string source){
    vector< pair<string, string>> data;
    string x;
    x=destination;
    while(true){

        if(root[x]==source){
            data.pb({root[x],x});
            break;
        }
        data.pb({root[x],x});
        x=root[x];
    }
    reverse(data.begin(),data.end());
    pair<string,string> temp;
    for(ll i=0;i<data.size();i++){
        temp=data[i];
        cout<<temp.first<<" "<<temp.second<<endl;
    }
    //cout<<endl;
}




int main() {
    ll n;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    bool flag=false;
    while(scanf("%lld",&n)!=EOF){
        if(flag) cout<<"\n";
        flag=true;
        graph *obj= new graph();
        string a,b;
        while(n--){
            cin>>a>>b;
            obj->addNode(a, b);
        }
        cin>>a>>b;
        getchar();
        getchar();
        bool flag;
        flag= obj->findDistance(a, b);
        if(flag==false){
            cout<<"No route\n";
        }
        else{
            obj->printRoot(b, a);
        }
        delete obj;

    }


    return 0;
}
