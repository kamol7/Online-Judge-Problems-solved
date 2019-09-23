#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[]={1,4,65,43,43,34,34,34,34,34,4,23,4,5,6,6,6,2,2,23,4,554,45};
    for(int x : arr){
        std::cout<<"the number is "<<x<<std::endl;
    }
    return 0;
}