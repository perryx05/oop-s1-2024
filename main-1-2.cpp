# include <iostream>
using namespace std;

extern void modifyArray(double* array, int size, double value);

int main(){
    double array[8] = {1.0,2.0,3.5,4.6,5.6,6.7,7.8,8.2};
    int size = 8;
    double value = 2;   
    modifyArray(array, size, value);
    for (int i = 0; i<8; i++){
        cout<<array[i]<<" ";
    }
}