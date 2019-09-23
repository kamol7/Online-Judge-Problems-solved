#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int x,int y){
    if(y==0)return x;
    return gcd(y,x%y);
}
void showAnswer(vector< int > dataOfNumber){
    int ans=(dataOfNumber[0]-dataOfNumber[1]);
    int baseNumber=dataOfNumber[0];
    for(int x : dataOfNumber){
        ans= gcd(baseNumber-x,ans);
    }
    cout<<ans<<endl;

}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int x;
    vector <int > dataOfNumber;
    lev:
    while(cin>>x && x){
        dataOfNumber.push_back(x);
    }
    if(dataOfNumber.size()==0) return 0;

    else {
        sort(dataOfNumber.begin(),dataOfNumber.end());
        reverse(dataOfNumber.begin(),dataOfNumber.end());
        showAnswer(dataOfNumber);
    }
    dataOfNumber.clear();
    goto lev;

}