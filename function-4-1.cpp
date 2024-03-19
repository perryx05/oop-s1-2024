
// Online IDE - Code Editor, Compiler, Interpreter

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int *secondSmallestSum(int *array,int length) {
    int sum = (1+length) * length/2;
    int *sumArray = new int [sum];
    for (int i = 0; i<length; i++){
        sumArray[i] = array[i];
    }
    int index = length;
  
    for (int i = 0; i<length-1; i++){
        int num = array[i];
        for (int j = i+1;j<length;j++){
            num = num+array[j];
            sumArray[index] = num;
            index++;
            
        }
        num = 0;
    }
    

    return sumArray;
}

    int main(){
       int *array = new int[10];
        for (int i = 0; i<5; i++){
            array[i]=i+1;
        }
        int *array2 = secondSmallestSum(array, 5);
       for (int i =0; i<15; i++){
           cout<<array2[i]<<" ";
       }
    }
    
    
    
