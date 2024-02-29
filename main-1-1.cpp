# include <iostream>

extern int array_sum(int array[], int n);

int main () {
    int array1[5] = {1,2,3,4,5};
     std::cout<<" the sum of all elements in the array1 is: "<< array_sum(array1, 5)<<std::endl;
    int array2[8] = {1,3,4,7,9,12,34,21};
    std::cout<<" the sum of all elements in the array2 is: "<< array_sum(array2, 8)<<std::endl;
    int array3[0]={};
    std::cout<<" the sum of all elements in the array3 is: "<< array_sum(array3, 0)<<std::endl;
    return 0;
}