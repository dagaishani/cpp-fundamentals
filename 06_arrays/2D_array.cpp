// to print 2-D array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    cout << "Enter the 3x3 matrix: \t"; 
    for (int r=0; r<3; r++)
    {
        for (int c=0; c<3; c++)
        {
        cin >> arr [r][c];
        }
    }
    for (int r=0; r<3; r++)
    {
        for (int c=0; c<3; c++)
        {
        cout << arr [r][c] << "\t" ;
        }
        cout << "\n";
    }
    return 0;
}