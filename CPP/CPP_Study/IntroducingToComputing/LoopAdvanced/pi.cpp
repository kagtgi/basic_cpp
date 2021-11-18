#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double pi;
    int i = 0;
    double sum= 0;
    while( i <=n){
        sum += pow(-1, i)/(2*i+1);
        i++;
    }
    pi = 4*sum;
    cout << fixed << setprecision(5) << pi << endl;
    system("pause");
    return 0;
}
