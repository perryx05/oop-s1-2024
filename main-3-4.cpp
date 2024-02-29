# include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main() {
    char grade1 = 'A';
    print_pass_fail(grade1);
    char grade2 = 'D';
    print_pass_fail(grade2);
    char grade3 = 'G';
    print_pass_fail(grade3);
}