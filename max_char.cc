/* Program to find minimum and maximum occuring character in a string 
 * Author : Koshy George
 */

#include <iostream>

using namespace std;
#define LEN 256

void find_char (char *s) {
    char minch, maxch;
    int i, max, min, *count;
    count = (int *)calloc(LEN, sizeof(int));
    for (i=0; *(s+i) != '\0'; i++) {
        count[*(s+i)]++;
    }
    maxch = *(s+0);
    minch = *(s+0);
    max = min = count[(int)minch];
    for (i = 1; i < LEN; i++) {
        if(count[i] > max ) {
            max = count[i];
            maxch = i;
        }
        if(min > count[i] && count[i] !=0 ) {
            min = count[i];
            minch = i;
        }
    }
    cout<<"\nMax char is "<<maxch<<" "<<max<<" times"<<endl;
    cout<<"\nMin char is "<<minch<<" "<<min<<" times"<<endl;
    free (count); 
}


int main() {
    char str[LEN];
    cout<<"\nEnter string "<<endl;
    cin.getline(str,255);
    find_char(str);
    return 0;
}
