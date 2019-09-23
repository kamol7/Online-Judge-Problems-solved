
#include <iostream>
using namespace std;

#include <string>
#include <cstring>
bool toggle(bool x){
    return !x;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int numberOfBulb;
    cin>>numberOfBulb;
    string x;
    cin>>x;
    //cout<<"ok\n";
    bool checkStartingPosition[numberOfBulb];

    for(int i=0;i<numberOfBulb;i++){
        if(x[i]=='1') checkStartingPosition[i]=true;
        else checkStartingPosition[i]=false;
    }
    bool visit[numberOfBulb][150];
    memset(visit,false, sizeof(visit));
    pair<int ,int>data[numberOfBulb];
    int xx,yy;
    for(int i=0;i<numberOfBulb;i++){
        cin>>xx>>yy;
        data[i]={xx,yy};
        //cout<<xx<< " "<<yy<<endl;
    }
    //cout<<"input taking complete\n";
    //cout<<"number of bulb : "<<numberOfBulb<<endl;
    for(int i=0;i<numberOfBulb;i++){
        for(int j=0;j<data[i].second;j++) visit[i][j]=checkStartingPosition[i];
        checkStartingPosition[i]=toggle(checkStartingPosition[i]);
        //cout<<"ok\n";
        int count=0;
        for(int j=data[i].second;j<150;j++){
            visit[i][j]=checkStartingPosition[i];
            count++;
            if(count==data[i].first) {
                count=0;
                checkStartingPosition[i]=toggle(checkStartingPosition[i]);

            }
        }

    }
    int maximum=0;
    for(int i=0;i<150;i++){
        int count=0;
        for(int j=0;j<numberOfBulb;j++ ){
            if(visit[j][i])count++;
        }
        maximum= max(maximum,count);
    }
    cout<<maximum<<endl;
    return 0;
}
