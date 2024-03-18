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
int *reverseArray(int *numbers1,int length){
    int *newArray = new int[length];
    for (int i = 0;i<length; i++){
        newArray[i] = numbers1[length-i-1];
    }
    return newArray;
}
bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length<=1){
        return false;
    }
    for (int i = 0; i<length; i++){
        if(numbers1[i]!=numbers2[i]){
            return false;
            break;
        }
    }
    return true;
}