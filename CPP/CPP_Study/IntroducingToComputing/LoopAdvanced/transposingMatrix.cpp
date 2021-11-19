#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
int main()
{
    // TODO
    int N;
    cin >> N;
    int A[N][N];
    int B[N][N];
    int i, j;
    for( i = 0; i < N; i ++){
        for(int j = 0; j < N; j ++){
            cin >> A[i][j];
        }
    }
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
     for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           cout << B[i][j]<< " ";
        cout <<"\n";
    }
}