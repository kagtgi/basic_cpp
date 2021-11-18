#include<iostream>
#include<math.h>
using namespace std;
void giaiPT(float a, float b, float c){
    if(a ==0){
        if(b ==0 && c ==0){
            cout << "Phuong trinh co vo so nghiem";
        }
        else if( b ==0 && c!=0){
            cout << "Phuong trinh vo nghiem";
        }
        else{
            cout << "Phuong trinh co nghiem la" << -c/b << "\n";
        }
    }
    else{
        float delta = b*b - 4*a*c;
        if(delta<0){
            cout <<"Phuong trinh vo nghiem\n";
        }
        else if(delta==0){
            cout << "Phuong trinh co nghiem kep la" << -b/(2*a) << "\n";
        }
        else{
            cout << "Phuong trinh co 2 nghiem phan biet la " << (-b +sqrt(delta))/(2*a) << " va " << (-b - sqrt(delta))/(2*a) << "\n";
        }
    }
}
int main(){
    float a,b,c;
    cout<<"Nhap a ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
    giaiPT(a, b, c);
    
    system("pause");
    return 0;
}