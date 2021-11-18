#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i ++){
        sum += arr[i];
    }
    cout << fixed << setprecision(2) << sum/n << endl;
    system("pause");
    return 0;
}
