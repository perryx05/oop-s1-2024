#include<iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main (){
    int array1[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int array2[4][4] = {0,1,1,1,0,2,3,4,4,5,6,8,9,2,3,4};
    count_digits(array1);
    return 0;
}