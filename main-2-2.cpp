# include <iostream>

extern int max_element(int array[], int n);

int main(){
    int array1[5] = {4,5,2,3,1};
    std::cout<<"The maximum nuumber in array1 is: "<<max_element(array1,5)<<std::endl;
    int array2[10] = {10,15,23,45,76,34,12,5,23,12};
    std::cout<<"The maximum nuumber in array2 is: "<<max_element(array2,10)<<std::endl;
}
