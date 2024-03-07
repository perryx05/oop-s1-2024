#include<iostream>
#include<math.h>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary1[7] = {1,1,1,1,0,1,1};
    int binary2[10] = {1,1,0,0,0,1,0,1,0,1};
   cout<< binary_to_int(binary1, 7)<<endl;
    cout<< binary_to_int(binary2, 10)<<endl;
}