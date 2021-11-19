#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()
{
    double hourly_rates[5]= {9.5, 6.4, 12.5, 5.5, 10.5};
    double working_hours[5];
    for(int i= 0; i < 5; i ++ ){
        cin >> working_hours[i];
    }
    double wages[5];
    for( int i = 0; i < 5; i ++){
        wages[i]= hourly_rates[i]*working_hours[i];
    }
    cout<< left << setw(30)<<"Hourly Rate"<< left << setw(30)<<"Working Hour" <<"Wage"<<endl;
    for(int i = 0; i<5; i++){
        cout<< fixed << setprecision(10)<< left << setw(30)<<hourly_rates[i]<< left << setw(30)<<working_hours[i]<< left << setw(30)<<wages[i]<<endl;
    }
   
    
}