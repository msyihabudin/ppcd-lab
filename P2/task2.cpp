#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, n;
    int a[10][10], b[10][10], hasil[10][10];
  	//do{
  		cin >> n;
  	//}
  	//while((n>10)||(n>10));
  	cout << endl;
  	for(i=0;i<n;i++)
  		for(j=0;j<n;j++)
    		 cin >> a[i][j];

  	cout << endl;
  	for(i=0;i<n;i++)
   		for(j=0;j<n;j++)
    		cin >> b[i][j];

  	for(i=0; i<n;i++)
	  	for(j=0; j<n; j++)
      		hasil[i][j] = a[i][j] + b[i][j];

    cout << endl;
    for(i=0; i< n; i++){
        for(j=0; j<n; j++)
            cout << hasil[i][j] << " ";

        cout << endl;
    }

    return 0;
}
