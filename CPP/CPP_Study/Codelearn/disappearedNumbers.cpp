/*Given a sequence of positive integers a with values in range 1...n ( n is length of sequence ). Unfortunately, some values of sequence
disappeared, instead there are some values that appear multiple times. Your task is to determine values disappeared in ascending order.
*/
std::vector<int> disappearedNumbers(std::vector<int> a)
{
    std::vector<int> myNum;
    
    int count[a.size()];
    for(int i = 0; i <= a.size(); i ++){
        count[i] =0;
    }
    for( int i = 0; i < a.size(); i ++){
        count[a[i]]++;
    }
    for(int i = 1; i <= a.size(); i ++){
        if(count[i]==0){
            myNum.push_back(i);
        }
    }
    return myNum;
}