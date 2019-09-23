#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool dp[100][100009];

void solve(){
    int *storeValue;
    int numberOfPeople;
    cin>> numberOfPeople;
    int sum=0;
    storeValue = new int[numberOfPeople];
    for(int i=0;i<numberOfPeople;i++){
        cin>>storeValue[i];
        sum+=storeValue[i];
    }
    sort(storeValue,storeValue+numberOfPeople);
    memset(dp,false, sizeof(dp));
    dp[0][0]=true;
    dp[0][storeValue[0]]=true;
    for(int i=1;i<numberOfPeople;i++){
        for(int j=storeValue[i];j<=sum;j++){

            dp[i][j]= (dp[i-1][j] | dp[i-1][j-storeValue[i]]);
        }
    }
    for(int i=0;i<=)

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}