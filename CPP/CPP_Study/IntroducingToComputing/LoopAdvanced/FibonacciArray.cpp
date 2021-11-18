#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int Fibo[n];
    Fibo[0]= 0;
    Fibo[1] = 1;
    for(int i = 2; i <=n; i++){
        Fibo[i]= Fibo[i-1] + Fibo[i-2];
    }
    cout << Fibo[n] << endl;
    system("pause");
    return 0;
}