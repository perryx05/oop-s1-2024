# include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main (){
    int array1[5] = {1,2,3,4,5};
    int array2[5] = {6,7,8,9,10};
    std::cout<<"The sum of array1 and array2 is: "<<sum_two_arrays(array1, array2, 5)<<std::endl;
    int array3[8] = {1,3,4,7,9,12,34,21};
    int array4[8] = {15,16,34,2,3,4,76,12};
    std::cout<<"The sum of array3 and array4 is: "<<sum_two_arrays(array3, array4, 8)<<std::endl;
}