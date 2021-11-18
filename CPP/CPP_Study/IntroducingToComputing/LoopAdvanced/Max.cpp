#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin >> arr[n];
    }
    int max = arr[0];
    for(int i = 0; i < n; i ++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << endl;
    system("pause");
    return 0;
}
