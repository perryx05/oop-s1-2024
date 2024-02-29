# include <iostream>

extern double sum_even(double array[], int n);

int main (){
    double array1[6] = {1,2,3,4,5,6};
    std::cout<<"The sum of the elements in the even positions in the array1 is: "<<sum_even(array1,6)<<std::endl;
    double array2[5] = {30.2,63.5,42.4,35.1,21};
    std::cout<<"The sum of the elements in the even positions in the array2 is: "<<sum_even(array2,5)<<std::endl;
    double array3[0] = {};
    std::cout<<"The sum of the elements in the even positions in the array3 is: "<<sum_even(array3,0)<<std::endl;
}