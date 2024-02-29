# include<iostream>
extern int count_evens(int number);

int main (){
    std::cout<<"The number of even numbers between 1 and 10 is: "<< count_evens(10)<<std::endl;
    std::cout<<"The number of even numbers between 1 and 100 is: "<< count_evens(100)<<std::endl;
}