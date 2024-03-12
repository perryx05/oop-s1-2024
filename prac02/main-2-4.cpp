# include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);

int main (){
    int array1[8] = {1,2,5,6,7,8,15,10};
    cout<<sum_min_max(array1, 8)<<endl;
    int array2[10] = {1,2,5,6,7,8,15,10,8,20};
    cout<<sum_min_max(array2, 10)<<endl;
}