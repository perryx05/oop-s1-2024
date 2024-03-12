# include <iostream>
# include "workshop.h"

using namespace std;

int main (){
    double a = 32;
    changeValue(&a);
    cout<<a<<endl;

    double array[5] = {1,2,3,7,5};
    printArray(array, 5);

    cout<<arrayMax(array, 5)<<endl;
    
    int num = 6;
    int b = 12;
    double *array1 =  dynamicArray(num, b);
    for (int i = 0; i<num; i++){
        cout<<array1[i]<<" ";
    }
}