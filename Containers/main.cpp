#include <iostream>
#include <string>
using namespace std;

#include <algorithm>
#include <map>
int main() {
    //std::cout << "Hello, World!" << std::endl;
    string x;
    while (true){
        cin>>x;
        if(x=="end")break;
        reverse(x.begin(),x.end());
        //int count=0;
        map <char,int> visit;
        char max=x[0];
        int size= x.size();
        int count=1;
        //visit[x[0]]++;
        for(int i=1;i<size;i++){
            if(x[i]==max)continue;
            if(visit[x[i]]==1){
                count++;
                visit[x[i]]++;
                continue;
            }
            if(visit[x[i]]==2) continue;
            if(x[i]>max) {
                visit[max]++;
                max=x[i];

            }
            else {
                count++;
                visit[x[i]]++;

            }
        }
        visit.clear();
        x.clear();
        cout<<count<<endl;
    }
    return 0;
}