#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double e= 1;
    int n;
    cin >> n;
    int i = 1;
    int c = 1;
    while( i <= n){
       c=c*i;
       e = e + (double)1/c;
       i++;
    }
    cout << fixed << setprecision(4) << e << endl;
    system("pause");
    return 0;
}