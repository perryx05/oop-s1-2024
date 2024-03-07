int is_identity(int array[10][10]) {
    int sum = 0;
    int sumDiagonal = 0;
    for (int i = 0; i<10; i++ ){
        for (int j = 0; j<10 ;j++){
        if ((array[i][i]==1) && (i!=j && array[i][j]==0)){
            return 1;
        }
 }
    }
    return 0;
}
