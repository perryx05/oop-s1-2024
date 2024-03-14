# include <iostream>
using namespace std;

extern double arrayMin(double* array, int size);

int main (){
    double array[5] = {1.1,1.2,2.5,6,7.8};
    int size = 5;
    double min = arrayMin(array, size);
    cout<<min;
}