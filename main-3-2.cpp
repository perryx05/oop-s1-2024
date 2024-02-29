# include <iostream>

extern int median_array(int array[], int n);

int main (){
    int array1[5] = {1,2,3,4,5};
    std::cout<<"The median of the array1 is: "<<median_array(array1,5)<<std::endl;
    int array2[10] = {10,15,23,45,76,34,12,5,23,12};
    std::cout<<"The median of the array2 is: "<<median_array(array2,10)<<std::endl;
    int array3[7] = {1,6,5,7,8,9,2};
     std::cout<<"The median of the array3 is: "<<median_array(array3,7)<<std::endl;
}