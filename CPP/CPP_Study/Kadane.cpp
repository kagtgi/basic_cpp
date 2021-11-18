int MaxConsecutiveSum(int a[], int n){
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < n; i ++){
        sum1 += a[i];
        if(sum1 < 0){
            sum1 = 0;
        }
        if( sum1 > sum2){
            sum2 = sum1;
        }
    }
}
// max consecutive of k elements
int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k)
{
    long max=0;
    for (int i=0; i<inputArray.size()-k+1; i++) {
        long temp(0); 
        for (int j=i; j<i+k; j++) {
            temp+=inputArray.at(j);
        }
        if (temp>max) max=temp;
    }
    return max;
}