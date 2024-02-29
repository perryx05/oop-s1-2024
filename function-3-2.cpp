int median_array(int array[], int n){
    int num;
    int median;
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
           if (array[i]<array[j]){
           num = array[i];
           array[i] = array[j];
           array[j] = num;
           }
        }
        
    }
    if (n%2 != 0){
      median = array[(n-1)/2];
      return median;
    }
      else {
        return 0;
      }
    }
