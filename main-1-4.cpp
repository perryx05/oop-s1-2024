#include<iostream>
using namespace std;

extern void print_scaled(int array[3][3],int scale);

int main(){
    int scale = 3 ;
    int array1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int array2[3][3] = {{1,3,5},{7,9,2},{6,4,8}} ;
    print_scaled(array1,scale) ;
     print_scaled(array2,scale) ;
    
}