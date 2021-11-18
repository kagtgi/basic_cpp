#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double hourly_rates[5]= {9.5, 6.4, 12.5, 5.5, 10.5};
    double working_hours[5];
    for(int i= 0; i < 5; i ++ ){
        cin >> working_hours[i];
    }
    double wages[5];
    for( int i = 0; i < 5; i ++){
        wages[i]= hourly_rates[i]*working_hours[i];
    }
    cout<<setw(10)<<"Number"<<setw(10)<<"Square"<<setw(10)<<"Cube"<<endl;
    cout<<"===================================="<< endl;
    for(int i = 0; i<5; i++){
    //output the number, square and cube in fields of width x
    cout<<setw(10)<< wages[i]<<setw(10)<<hourly_rates[i]<<setw(10)<<working_hours[i]<<endl;
    }
   
    system("pause");
    return 0;
}