# include<iostream>

extern double weighted_average(int array[], int n);

int main (){
    int array1[6] = {1,2,1,4,1,3};
    std::cout<<"The weighted average of array1 is: "<<weighted_average(array1,6)<<std::endl;
    int array2[5] = {1,2,3,5,6};
    std::cout<<"The weighted average of array2 is: "<<weighted_average(array2,5)<<std::endl;
    int array3[0] = {};
    std::cout<<"The weighted average of array3 is: "<<weighted_average(array3,0)<<std::endl;
}