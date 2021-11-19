#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

const int MAX = 100;

struct student{
    char name[20];
    long int rollno;
    char sex;
    float height;
    float weight;
};

int main() {
    student cls[MAX];
    int i,n;
    cout << "How many names ? \n";
    cin >> n;

    for (i = 0; i <= n-1; ++i){
        cout << "record = "<< i+1 << endl;
        cout << "name : "; cin>> cls[i].name;
        cout << "rollno : "; cin>> cls[i].rollno;
        cout << "sex : "; cin>> cls[i].sex;
        cout << "height : "; cin>> cls[i].height;
        cout << "weight : "; cin>> cls[i].weight;
        cout << endl;
    }
    // TODO
    cout<< left << setw(20)<<"Name"<< left << setw(20)<<"Rollno"<< left << setw(20)<<"Sex" << left << setw(20) << "Height"<< left << setw(20) << "Weight"<<endl;
    for(int i = 0; i<=n-1; i++){
    cout<<fixed<< setprecision(2)<< left << setw(20)<<cls[i].name<< left << setw(20)<<cls[i].rollno<< left << setw(20)<< cls[i].sex<< left << setw(20) <<cls[i].height << left << setw(20) << cls[i].weight <<endl;
    }
    float sumHeight;
    float sumWeight;
    for(int i = 0; i < n; i ++){
        sumHeight+=cls[i].height;
        sumWeight+=cls[i].weight;
    }
    cout << fixed << setprecision(5) <<(float) sumHeight/n<<" "<< (float)sumWeight/n<< endl;
   
    
}