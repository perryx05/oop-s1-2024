 # include<iostream>
 using namespace std;
 void count_digits(int array[4][4]) {
    int count[10] = {0};
    for (int i = 0;i<4; i++){
        for (int j = 0; j<4; j++){
            if (array[i][j]<10){
            count[array[i][j]]++;
            }
        }
    }
    for (int i = 0; i<10; i++){
        cout<<i<<":"<<count[i]<<";";
    }
 }