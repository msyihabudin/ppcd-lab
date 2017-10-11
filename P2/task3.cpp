#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, k, n;
    int a[10][10], b[10][10], hasil[10][10];

    cin >> n;
  	cout << endl;
  	for(i=0; i<n; i++)
  		for(j=0; j<n; j++)
    		 cin >> a[i][j];

  	cout << endl;
  	for(i=0; i<n; i++)
   		for(j=0; j<n; j++)
    		cin >> b[i][j];

  	for(i=0; i<n; i++)
	  	for(j=0; j<n; j++)
        {
            hasil[i][j]=0;
            for(int k=0;k<n;k++)
                hasil[i][j]=hasil[i][j]+a[i][k]*b[k][j];
        }
      		//hasil[i][j] = m1[i][j] * m2[i][j];

    cout << endl;
    for(i=0; i< n; i++)
    {
        for(j=0; j<n; j++)
            cout << hasil[i][j] << " ";

        cout << endl;
    }

    return 0;
}
