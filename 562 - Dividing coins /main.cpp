#include <iostream>
using namespace std;

bool dp[120][70100];

#include <vector>
#include <algorithm>
#include <math.h>
void solve(int x){
    if(x==0){
        cout<<0<<endl;
        return;
    }
    vector<int> data;
    int sum=0;
    int number;

    for(int i=0;i<x;i++){
        cin>> number;
        data.push_back(number);
        sum+=number;

    }
    //cout<<sum<<endl;
    sort(data.begin(),data.end());
    for(int i=0;i<x;i++){
        for(int j=0;j<=sum;j++) dp[i][j]=false;
    }
    dp[0][0]= true;
    dp[0][data[0]]=true;
    sum=data[0];
    for(int i=1;i<x;i++){
        sum+=data[i];
        for(int j=0;j<data[i];j++)dp[i][j]=dp[i-1][j];
        for(int j=data[i];j<=sum;j++){
            dp[i][j]= (dp[i-1][j] | dp[i-1][j-data[i]]);
        }
    }
    //cout<<sum<<endl;
    int dif= sum;
    for(int i=0;i<sum;i++){
        //cout<<dp[4][i]<<endl;
        if(dp[x-1][i]==true){
            int diff= abs(sum-i-i);
            //cout<<diff<<" : "<< i<<endl;
            dif= min(diff,dif);
        }
    }
    cout<<dif<<endl;
    //cout<<(sum-dif)/2<<" "<<(sum+dif)/2<<endl;
    data.clear();


}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    int number;
    int test;
    cin>>test;
    while (test--){
        cin>>number;
        solve(number);
    }
    return 0;
}