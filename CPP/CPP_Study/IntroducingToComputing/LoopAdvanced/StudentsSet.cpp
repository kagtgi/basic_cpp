#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
const int MAX = 100
struct student{
    char name[20];
    long int rollno;
    char sex;
    float height;
    float weight;
};

int main(){
    student cls[MAX];
    int i,n;
    cout << " How many names ? \n";
    cin >> n;
    for( i = 0; i <= n-1; ++i){
        cout << "record = "<< i+1 << endl;
        cout << "name : ";
        cin>> cls[i].name;
        cout << "rollno : "; 
        cin>> cls[i].rollno;
        cout << "sex : "; 
        cin>> cls[i].sex;
        cout << "height : "; 
        cin>> cls[i].height;
        cout << "weight : "; 
        cin>> cls[i].weight;
        cout >> endl;
    }
    cout<<setw(10)<<"Name"<<setw(10)<<"Rollno"<<setw(10)<<"Sex" << setw(10) << "Height"<<setw(10) << "Weight"<<endl;
    for(int i = 0; i<=n-1; i++){
    cout<<setw(10)<<cls[i].name<<setw(10)<<cls[i].rollno<<setw(10)<< cls[i].sex<< setw(10) <<cls[i].height <<setw(10) << cls[i].weight <<endl;
    }
    double sumHeight;
    double sumWeight;
    for(int i = 0; i < n; i ++){
        sumHeight+=cls[i].height;
        sumWeight+=cls[i].weight;
    }
    cout << fixed << setprecision(4) << "Average height = " << sumHeight/n<< endl;
    cout << fixed << setprecision(4) << "Average weight = " << sumWeight/n<< endl;
    system("pause");
    return 0;
}
