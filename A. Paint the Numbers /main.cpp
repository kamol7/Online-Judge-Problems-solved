#include <iostream>
//#include <vector>
using namespace std;

#include <algorithm>
int main() {
    //std::cout << "Hello, World!" << std::endl;
    int number;
    cin>>number;
    int *arr;
    bool visit[number];
    for(int i=0;i<number;i++) visit[i]=true;
    arr= new int[number];
    for(int i=0;i<number;i++) cin>>arr[i];
    sort(arr,arr+number);
    int count=0;
    for(int i=0;i<number;i++) {
        if(visit[i]){
            count++;
            for(int j=i;j<number;j++){
                if(arr[j]%arr[i]==0) visit[j]=false;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}