#include<iostream>
#include<string>

using namespace std;

extern void print_binary_str(string number);

int main(){
    string number1 = "123";
    string number2 = "789";
    print_binary_str(number1);
      print_binary_str(number2);

}