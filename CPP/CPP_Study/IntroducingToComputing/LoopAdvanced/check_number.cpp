#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    for( int i= 0; i < n; i ++){
        if(arr[i] > 0){
            cout << arr[i] << " is a positive number\n";
        }
        else if( arr[i] < 0){
            cout << arr[i] << " is a negative number\n";
        }
        else{
            cout << " number is 0\n";
        }
    }
    system("pause");
    return 0;
}
