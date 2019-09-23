#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int number;
    cin>>number;
    string first;
    string second;
    cin>>first>>second;
    vector<int> aa,ab,ba,bb;
    for(int i=0;i<number;i++){
        if(first[i]=='a'){
            if(second[i]=='a') aa.push_back(i);
            else ab.push_back(i);
        }
        else{
            if(second[i]=='a') ba.push_back(i);
            else bb.push_back(i);
        }
    }
    int aasize=aa.size();
    int bbsize=bb.size();
    int absize=ab.size();
    int basize=ba.size();
    if(absize%2 == basize%2){
        int result=0;
        vector< pair<int,int> > resultData;

        if(absize%2==0){
            result= absize/2 + basize/2;
            for(int i=0;i<absize;i+=2){
                resultData.push_back({ab[i],ab[i+1]});

            }
            for(int i=0;i<basize;i+=2){
                resultData.push_back({ba[i],ba[i+1]});
            }
        }
        else{
            result= absize/2 + basize/2 + 2;
            for(int i=0;i<absize-1;i+=2){
                resultData.push_back({ab[i],ab[i+1]});

            }
            for(int i=0;i<basize-1;i+=2){
                resultData.push_back({ba[i],ba[i+1]});
            }
            resultData.push_back({ab[absize-1],ab[absize-1]});
            resultData.push_back({ab[absize-1],ba[basize-1]});
        }
        cout<<result<<endl;
        for(pair<int,int> temp : resultData){
            cout<<temp.first+1<<" "<<temp.second+1<<endl;
        }
        return 0;
    }
    else{
        cout<<-1<<endl;
        return 0;
    }
    return 0;
}