double array_mean(int array[], int n) {
    double sum = 0; 
    if (n>=1){
        for (int i =0; i<n; i++){
            sum = sum+array[i];
        }
        double mean = sum/n;
        return mean;
    } else {
        return 0.0;
    }
}