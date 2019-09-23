#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    /*
     * Problem statement:
     * Given a string str
     * and a substring of str subStr
     * the reverse of the sub string revSubStr
     * now you are called whether the string revSubstr present in the str string or not
     */
    char str[100];
    char subStr[100];
    char revSubStr[100];
    scanf("%s%s",str,subStr);
    /*
     * first we take input from keyboard
     * then find the length of subStr
     * reverse it and store it in revSubStr
     * then we check whether it is in the string or not
     */
    int sizeOfSubStr=strlen(subStr);
    for(int i=0, j = sizeOfSubStr-1;i<sizeOfSubStr;i++,j--){
        revSubStr[i]=subStr[j];
        /*
         * reversing the string
         */
    }
    revSubStr[sizeOfSubStr]='\0';
    int checker= 0;
    int sizeOfStr= strlen(str);
    for(int i=0;i<sizeOfStr;i++){
        int j=0;
        int k=i;
        while (str[k]==subStr[j]){
            k++;
            j++;
            /*
             * while the string is match with revSubStr increment both index
             */
        }
        if(k==sizeOfSubStr) {
            /*
             * if k == sizeOfSubStr
             * then it finished full checking
             * and the reverse substring present in the main string
             */
            checker=1;
            break;
        }
    }
    if(checker) printf("Yes\n");
    else printf("No\n");


    return 0;
}