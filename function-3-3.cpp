double weighted_average(int array[], int n) {
    double sum = 0;
    double count = 0;
    for (int i = 0; i<n; i++){
        
        for (int j=0; j<n; j++){
            if (array[i]==array[j]){
                count ++;
                
            }
            sum = sum + (array[i] * count / n);
            count = 0;
        }   
        
    }
   return sum;
}