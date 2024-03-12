#include <iostream>
using namespace std;

void changeValue (double* num){
    *num = 42;
}

void printArray(double* array, int size){
    for (int i = 0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

double arrayMax(double* array, int size){
    double max = array[0];
    for (int i = 0; i<size; i++){
        if (max<array[i]){
            max = array[i];
        }
    }
    return max;
}
double* dynamicArray(int num, double a) {
     double *array = new double[num];
     for (int i = 0; i<num; i++){
        array[i] = a;
     }
     return array;
}