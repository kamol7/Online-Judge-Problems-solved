#include <iostream>
using namespace std;

#include <sstream>
#include <vector>
#include <cstring>
#include <algorithm>
bool isPossible(vector < int > data, int avarage){
    int size=data.size();
    sort(data.begin(),data.end());
    bool dp[size][avarage+1];
    memset(dp,false,sizeof dp);
    dp[0][0]=true;
    dp[0][data[0]]=true;
    for(int i=1;i<size;i++){
        for(int j=0;j<data[j] && j<=avarage;j++) {
            dp[i][j]=dp[i-1][j];

        }
        for(int j=data[i];j<=avarage;j++){
            dp[i][j]= (dp[i-1][j]  | dp[i-1][j-data[i]]);
         }
    }
    return dp[size-1][avarage];

}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    stringstream myStream;

    string takeInput;
    vector <int> dataOfCoin;
    int test;
    scanf("%d",&test);
    getline(cin,takeInput);
    //cout<<takeInput<<endl;
    //cout<<"ok\n";
    while (test--){
        //cout<<"ok upto this\n";
        takeInput.clear();
        //cout<<takeInput<<endl;
        myStream.clear();
        getline(cin,takeInput);
        myStream << takeInput;
        //cout<<takeInput<<endl;
        int number;
        int sum=0;
        while (myStream >> number){
            dataOfCoin.push_back(number);
            sum+=number;
        }
        //cout<<sum<<endl;
        if(sum & 1){
            cout<<"NO\n";
            dataOfCoin.clear();
            continue;
        }
        if(isPossible(dataOfCoin,sum>>1)) cout<<"YES\n";
        else cout<<"NO\n";
        dataOfCoin.clear();

    }
    return 0;
}