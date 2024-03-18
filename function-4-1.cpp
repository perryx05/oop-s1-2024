# include <iostream>
using namespace std;

int *readNumbers (){
    int length = 10;
    int *array = new int[10];
    for (int i = 0;i<length; i++){
        cin>>array[i];
    }
   return array;
}

int secondSmallestSum(int *array,int length) {
    int num;
   for (int i = 0; i<length; i++){
        for (int j = i+1; j<length; j++){
           if (array[i]>=array[j]){
           num = array[i];
           array[i] = array[j];
           array[j] = num;
           }
        }
        
    }
    return array[0] + array[1];
}