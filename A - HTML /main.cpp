#include <iostream>
#include <string>
using  namespace std;
int main() {
    //std::cout << "Hello, World!" << std::endl;
    std::string x="";
    for(int i=0;i<80;i++) x+="-";
    int line=0;
    int size=0;
    string takeInput;
    while(cin>>takeInput){

        if(takeInput== "<br>"){
            cout<<endl;
            line=0;
        }
        else if( takeInput== "<hr>"){
            if(line==0) {
                cout<<x<<endl;
            }
            else {
                cout<<"\n"<<x<<endl;
            }
            line=0;
        }
        else {
            size= takeInput.size();
            if(size==80){
                if(line ==0)cout<<takeInput<<endl;
                else {
                    line=0;
                    cout<<"\n"<<takeInput<<endl;
                }
            }
            else if(line+size<80){
                if(line==0){
                    cout<<takeInput;
                    line--;
                }
                else cout<<" "<<takeInput;

                line+=size+1;

            }
            else{
                cout<<"\n"<<takeInput;
                line=size;
            }

        }
        takeInput.clear();
    }

    if(line>0) cout<<endl;
    return 0;
}