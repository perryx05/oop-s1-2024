# include<iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]) ;

int main(){
    int matrix1[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int matrix2[4][4] = {17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,29, 30, 31, 32};
    cout<<"The sum of elements along the main diagonal of matrix 1 is: "<< sum_diagonal(matrix1)<<endl;
    cout<<"The sum of elements along the main diagonal of matrix 2 is: "<< sum_diagonal(matrix2)<<endl;
}