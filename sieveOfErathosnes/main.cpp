#include <iostream>
char prime[500];
int primeNumber[100];
void sieve(){
    memset(prime, 1, sizeof(prime));
    /*
     * to set 1 to all the index
     */
    prime[1]= 0;
    int i = 0;
    for(int j=2;j<500;j++){
        /*
         * first we check is the index 1 or not
         * if 1 then it's a prime number
         * then false it's every multiple
         * if 0 then ignore
         */
        if(prime[j]==1){
            primeNumber[i]= j;
            i++;
            for(int k= j*2;k<500; k= k +j) prime[k]= 0;
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    sieve();
    std::cout<<"Please Enter a number: "<<std::endl;// printf
    int s;
    std::cin>>s; //scanf
    if(prime[s]==1) std::cout<<"prime\n";
    else std::cout<<"not prime\n";
    return 0;
}