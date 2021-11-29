#include <iostream>
using namespace std;

int main(){
    double sum=0;
    double k = 29/9;
    while(k <= 61/9){
        sum += k*k +2*k;
        k += 4/9;
    }
    double s = sum *4/9;
    cout <<"s ="<< s;
}