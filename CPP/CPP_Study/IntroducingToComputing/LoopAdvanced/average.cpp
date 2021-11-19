#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float arr[n];
    float sum;
    for(int i = 0; i < n; i ++){
        cin >>arr[i];
    }
    for(int i = 0; i < n; i ++){
        sum+=arr[i];
    }
    cout << fixed << setprecision(2)<< (float) sum/n << endl;
    
}
