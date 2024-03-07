# include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main (){
    int array1[6] = {1,2,0,0,2,1};
    cout<<sum_if_palindrome(array1, 6)<<endl;
    int array2[6] = {1,2,3,0,2,1};
    cout<<sum_if_palindrome(array2, 6)<<endl;
}