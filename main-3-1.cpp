# include <iostream>

extern bool is_fanarray(int array[], int n);

int main (){
    int array1[5] = {1,3,5,3,1};
    std::cout<<is_fanarray(array1, 5);
    int array2[7] = {1,3,5,4,2};
    std::cout<<is_fanarray(array2,7);
    int array3[0] = {};
    std::cout<<is_fanarray(array3,0);
}