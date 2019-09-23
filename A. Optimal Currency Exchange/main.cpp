#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int money,dollar,euro;
    int ans=money;
    cin>>money>>dollar>>euro;
    for(int i=0; i*euro <= money;i+=5 ){
        int a= (money- (i*euro))%dollar;
        if(a<ans) ans = a;
    }
    cout<<ans<<endl;
    return 0;
}