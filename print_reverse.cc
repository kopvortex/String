/* This program reverses an input string using recursion 
 * Author : Koshy George
 */
#include <iostream>
using namespace std;

void reverse_str(char *str) {
    if(*str) {
        reverse_str(str+1);
        cout<<*str;
    }
}

int main() {
    char str[256];
    cout<<"\n Enter a string to reverse"<<endl;
    cin.getline(str,256);
    reverse_str(str);
    cout<<"\n";
    return 0;
}
