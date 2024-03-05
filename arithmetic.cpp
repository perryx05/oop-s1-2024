# include<iostream>
using namespace std;

string shiftleft(string binary){
    string shifted = binary;
    for (int i = binary.length()-1; i>=1; i--){
        shifted[i-1] = binary[i];
    }
    shifted[binary.length()-1] = '0';
    return shifted;
}

int main (){
    cout<<shiftleft("000001")<<endl;
    return 0;
}