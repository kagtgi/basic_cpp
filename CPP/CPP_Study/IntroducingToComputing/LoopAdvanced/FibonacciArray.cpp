#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long Fibo[n];
    Fibo[0]= 0;
    Fibo[1] = 1;
    for(int i = 2; i <=n; i++){
        Fibo[i]= Fibo[i-1] + Fibo[i-2];
    }
    for(int i = 0; i < n; i ++){
        cout << Fibo[i] << " ";
    }
    
    return 0;
    
}