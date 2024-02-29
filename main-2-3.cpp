# include <iostream>

extern void two_five_nine(int array[], int n);

int main(){
    int array1[15] = {2, 2, 2, 5, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    two_five_nine(array1, 15);
    int array2[9] = {2, 2, 2, 5, 5, 5, 9, 9, 9};
    two_five_nine(array2, 9);
    int array3[6] =  {1, 3, 4, 6, 7, 8};
    two_five_nine(array3, 6);
}