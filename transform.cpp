# include <iostream>
# include <string.h>

using namespace std;

int main(){
    int base10;
    cin >>base10;
    int power2 = 1;
    int length = 0;
    while (power2 <= base10){
        power2 = power2 * 2;
        length ++;
    }
    int newBase10[length];
    int index = length-1;
    while (base10 != 0) {
         newBase10[index] = base10 % 2;
         base10 = base10/2;
         index = index -1;
    }
    for (int i = 0; i<length; i++){
        cout << newBase10[i];
    }
 return 0;
}