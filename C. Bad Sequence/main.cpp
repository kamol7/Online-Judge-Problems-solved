#include <iostream>
#include <string>
using namespace std;


int main() {
   int n;
   cin>>n;
   if(n&1) {
       cout<<"No\n";
       return 0;
   }

   string str;
   cin>>str;
   int checker=0;
   bool flag= true;
   int leftAngle=0;
   int rightAngle=0;
   n--;
   for(int i=0;i<=n;){
       while (str[i] == '(' && i<=n) {
               leftAngle++;
               i++;
           }

       while (str[i]==')' && i<=n){
           rightAngle++;
           i++;
       }
       while(str[n]==')' && n>=i){
           rightAngle++;
           n--;
       }
       if(flag == false && (rightAngle==leftAngle)) {
           checker=0;
           continue;
       }
       if(leftAngle==rightAngle) {
           leftAngle=0;
           rightAngle=0;
           continue;
       }
       else if(abs(rightAngle-leftAngle)>1){
           cout<<"No\n";
           return 0;
       }
       else if(flag){
           flag= false;
           if(rightAngle>leftAngle){
               rightAngle = 1;
               leftAngle =0;
           }
           else{
               rightAngle=0;
               leftAngle=1;
           }
           if(rightAngle>leftAngle) checker=1;
           else checker = 2;
       }
       else
       {
           if(abs(rightAngle-leftAngle)==1) ;
           else{
               printf("No\n");
               return 0;
           }
           if(checker==1 && (rightAngle>leftAngle)) continue;
           else if(checker==2 && (leftAngle>rightAngle)) continue;
           else{
               printf("No\n");
               return 0;
           }
       }



   }
   if(leftAngle==rightAngle)
   cout<<"Yes\n";
   else printf("No\n");

    return 0;
}