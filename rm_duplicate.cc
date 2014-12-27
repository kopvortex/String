/* This program removes the duplicate characters from the input string
 * Author : Koshy George
 */

#include <iostream>
#define bool int
using namespace std; 

/* Uses a hash and does inplace replacement */
char *rm_dup (char *str) {
    char temp;
    int orig_indx, new_indx;
    orig_indx=0;
    new_indx=0;
    bool hash[256] ={0};
    while (*(str + orig_indx)) {
        temp = *(str + orig_indx);
        if(hash[temp] == 0) {
            hash[temp] =1;
            *(str + new_indx) = temp;
            new_indx++;
        }
        orig_indx++;
    }
    *(str+new_indx) = '\0';
    return str;
}

int main() {
    char str[256];
    cout<<"\n Enter a string"<<endl;
    cin.getline(str,255);
    cout<<"\n Modified string is "<<rm_dup(str)<<endl;
    return 0;
}
