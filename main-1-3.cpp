# include <iostream>
using namespace std;

extern double* duplicateArray(double* array, int size);

int main(){
    double array[6] = {1,2,3.5,4.3,6.4,7};
    int size = 6;
    double *newArray = duplicateArray(array,size);
    for (int i = 0; i<size; i++){
        cout<<newArray[i]<<" ";
    }
}