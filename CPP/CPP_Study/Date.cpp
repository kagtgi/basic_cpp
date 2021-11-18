#include <iostream>
using namespace std;
//31ngay: 1 3 5 7 8 10 12, nhuan thang 2 co 29
void NgayTiepTheo(int day, int month, int year){
    if(( year %4 ==0 && year%100!=0)||(year %400==0)){
        if( (month == 1)||(month == 3)||(month == 5)||(month == 7)||(month == 8)||(month == 10)||(month == 12)){
            if(day < 31){
                day +=1;
            }
            else if( day = 31){
                day = 1;
                if (month < 12){
                    month +=1;
                }
                else if(month ==12){
                    month =1;
                    year +=1;
                }
            }
        }
        if( (month == 4)||(month == 6)||(month == 9)||(month == 11)){
            if(day < 30){
                day +=1;
            }
            else if( day = 30){
                day = 1;
                month +=1;
            }
        }
        if (month ==2){
            if(day < 29){
                day +=1;
            }
            else if(day = 29){
                day=1;
                month+=1;
            }
        }
    }
    else if ( year %4!=0){
        if( (month == 1)||(month == 3)||(month == 5)||(month == 7)||(month == 8)||(month == 10)||(month == 12)){
            if(day < 31){
                day +=1;
            }
            else if( day = 31){
                day = 1;
                if (month < 12){
                    month +=1;
                }
                else if(month ==12){
                    month =1;
                    year +=1;
                }
            }
        }
        if( (month == 4)||(month == 6)||(month == 9)||(month == 11)){
            if(day < 30){
                day +=1;
            }
            else if( day = 30){
                day = 1;
                month +=1;
            }
        }
        if (month ==2){
            if(day < 28){
                day +=1;
            }
            else if(day = 28){
                day=1;
                month+=1;
            }
        }

    }
    cout << day << " "<< month <<" "<< year << "\n";
    
}
int main(){
    int ngay, thang, nam;
    cout << "Nhap vao ngay thang nam\n";
    cout << "Ngay: ";
    cin >> ngay;
    cout << "\n";
    cout << "Thang: ";
    cin >> thang;
    cout << "\n";
    cout << "Nam: ";
    cin >> nam;
    cout << "\n";
    NgayTiepTheo(ngay, thang, nam);
    system("pause");
    return 0;
}