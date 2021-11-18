int removeDuplicated(int arr[], int n){ //arr is a sorted array, size n.
    int i= 1;
    for(int j =0; i < n; j ++){
        if(arr[j] !=arr[j+1]){
            i++;
            arr[i]= arr[j];
        }
    }
    return i;
}
