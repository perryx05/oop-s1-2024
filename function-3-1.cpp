 bool is_fanarray(int array[], int n) {
     if (n%2 == 0 && n>=1){
        for (int i = 0; i<n/2; i++){
            if (array[i]!=array[n-1-i]){
                return false;
                break;
            }
        }
        for (int i = 0; i<n/2-1;i++) {
            if (array[i]>array[i+1]){
                return false;
                break;
            }
        }
        return true;
        }
     else if (n%2 != 0 && n>=1){
         for (int i = 0; i<(n-1)/2; i++){
            if (array[i]!=array[n-1-i]){
                return false;
                break;
            }
         }
         for (int i = 0; i<(n-1)/2; i++) {
            if (array[i]>array[i+1]){
                return false;
                break;
            }
        }
    
     }
     else {
        return false;
     }
     return true;
     
 }