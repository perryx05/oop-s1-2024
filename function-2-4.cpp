 bool is_ascending(int array[], int n){
    int count = 0;
    for (int i = 0; i<n-1 ;i++){
       if (array[i+1]>array[i]){
        count ++;
       }
    }
    if (count == n-1){
        return true;
    } else {
        return false;
    }
 }