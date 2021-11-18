#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cin >> n;
    for(int i = 0; i <= n; i ++){
        sum +=i*i;
    }
    cout<< sum << endl;
    system("pause");
    return 0;
}
