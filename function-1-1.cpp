#include <iostream>
using namespace std;

int *readNumbers (){
    int length = 10;
    int *array = new int[10];
    for (int i = 0;i<length; i++){
        cin>>array[i];
    }
   return array;
}

void printNumbers(int *array, int length){
   for (int i = 0;i<length; i++){
    cout<<i<<" "<<array[i]<<endl;
   }
}
