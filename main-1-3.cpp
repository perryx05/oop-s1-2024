# include<iostream>

extern int num_count(int array[], int n, int number);

int main (){
    int array1[5] = {1,2,3,3,4};
     std::cout<<" the number of elemnents in array1 are equal to 3:  "<< num_count(array1, 5,3)<<std::endl;
    int array2[8] = {1,3,4,7,9,12,34,21};
    std::cout<<" the number of elemnents in array2 are equal to 4:  "<< num_count(array2, 8,4)<<std::endl;
     int array3[0]={};
     std::cout<<" the number of elemnents in array3:   "<< num_count(array3, 0,4)<<std::endl;
     return 0;
}
 