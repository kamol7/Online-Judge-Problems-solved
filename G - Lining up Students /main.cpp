#include <iostream>
using namespace std;



int solve(){
    int myPosition=1;
    int numberOFPeople;
    cin>>numberOFPeople;
    int currentStudentPosition;
    cin>>currentStudentPosition;
    for(int i=2;i<=numberOFPeople;i++){
        cin>>currentStudentPosition;
        int hisPosition= i-currentStudentPosition;
        if( hisPosition<=myPosition) myPosition++;
    }
    return myPosition;
}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        printf("Case %d: %d\n",i,solve());
    }
    return 0;
}