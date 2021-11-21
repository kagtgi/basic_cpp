#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
int main()
{
    double n, x;
    cin >> n >> x;
    double ans1= x;
    double ans2= (double)1/x;
    if(n ==0){
        cout << "1.00 1.00";
    }
    else if( n ==1){
        cout << fixed << setprecision(2) << x << " "<<(float) 1/x<< endl;
    }
    else{
    for(int i = 2; i <n+1; i ++){
        ans1 *=x;
    }
    for(int i = -2; i >= -n; i --){
        ans2 = ans2/x;
    }
    cout << fixed << setprecision(2) <<(float) ans1 << " " << ans2 << endl;
    }
}