# include<iostream>

extern  bool is_ascending(int array[], int n);

int main (){
    int array1[5] = {1,2,3,4,5};
    std::cout<<is_ascending(array1,5);
    int array2[8] = {1,5,4,2,3,4,7,8};
    std::cout<<is_ascending(array2,8);
    int array3[5] = {10,9,8,7,6};
     std::cout<<is_ascending(array3,5);
}