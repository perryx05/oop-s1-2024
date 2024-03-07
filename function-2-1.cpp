#include<iostream>
#include<string>

using namespace std;

void print_binary_str(string number){
  int decimal = stoi(number);
   int power2 = 1;
    int length = 0;
    while (power2 <= decimal){
        power2 = power2 * 2;
        length ++;
    }
    int newBinary[length];
    int index = length-1;
    while (decimal != 0) {
         newBinary[index] = decimal % 2;
         decimal = decimal/2;
         index = index -1;
    }
    for (int i = 0; i<length; i++){
        cout << newBinary[i];
    }
    cout<<endl;
}
