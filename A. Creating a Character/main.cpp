#include <iostream>
#include <algorithm>
using namespace std;
#define long long long
long find(long str, long ini, long exp){
    long ways=0;
    if(str+exp <= ini) return 0;
    ways = str + exp - ini;
    if(ways & 1) ways= ways/2 + 1;
    else ways= ways/2;
    return min(ways,exp+1);
}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    int t;
    cin>>t;
    long str,ini,exp;
    while (t--){
        cin>>str>>ini>>exp;
        cout<< find(str,ini,exp)<<endl;
    }
    return 0;
}