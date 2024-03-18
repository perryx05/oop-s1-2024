# include<iostream>
using namespace std;

extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main (){
    int *array = readNumbers();
    int *newArray = reverseArray(array, 10);
    cout<<equalsArray(array, newArray, 10);
    delete [] array;
    delete [] newArray;
}