#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int i, j, n, k, arrai[10], matriks[10][10];

    cin >> n;

    k=0;

    for(i=0;i<n*n;i++)
    cin >> arrai[i];

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                matriks[i][j] = arrai[k];
                k++;
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout << matriks[i][j];
                if(j==n-1){
                    cout << endl;
                }else{
                    cout << " ";
                }
            }
        }
    return 0;
}
