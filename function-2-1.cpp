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

void hexDigits(int *numbers,int length) {
     char hex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
     for (int i = 0; i<length; i++){
         cout<<i<<" "<<numbers[i]<<" "<<hex[numbers[i]]<<endl;
     }
}