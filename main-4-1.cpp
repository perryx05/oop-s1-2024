# include <iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main(){
    int *array = readNumbers();
    cout<<secondSmallestSum(array, 10)<<endl;
    delete[] array;
}